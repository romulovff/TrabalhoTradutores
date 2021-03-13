%error-verbose
%debug
%locations

%{

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "tree.h"

void yyerror(const char* msg) {
  printf("%s\n", msg);
}
int yylex();
extern int yylex_destroy(void);

%}

%union{
  char* str;
  int integer;
  float dec;

  struct node *ast;
}

%token<str> ID
%token<str> TYPE
%token<str> ELEMTYPE

%token<integer> INTEGER
%token<dec> DECIMAL
%token<str> STRING
%token<str> CHAR

%token<str> EMPTY
%token<str> MAIN
%token<str> RETURN

%left ADD
%left SUB
%left MULT
%left DIV

%left OR
%left AND
%right NEG
%left SMALLER
%left GREATER
%left SMALLEQ
%left GREATEQ
%left EQUALS
%left DIFFERENT
%right ASSIGN

%token<str> IF
%token<str> ELSE
%token<str> FOR

%token<str> READ
%token<str> WRITE
%token<str> WRITELN

%token<str> IN
%token<str> ISTYPE
%token<str> ADDSET
%token<str> REMOVE
%token<str> EXISTS
%token<str> FORALL

%token<str> SEMIC
%token<str> COMMA
%token<str> STFUNC
%token<str> ENDFUNC
%token<str> PARENL
%token<str> PARENR


%start prog
%type<ast> declarations_list declaration var_dec func_dec params_list parameter statement_list statement
%type<ast> ret_st assign_value math_op set_op in_set basic_ops if_ops io_ops expression log_op func_call
// %type declarations_list declaration var_dec function_declaration parameters_list parameter statement_list statement
// %type assign_value basic_ops if_ops for_op forall_op expression terminal set_op log_op in_set
// %type diff_is_type is_type math_op io_ops read write writeln ret_st

%%

prog:
    declarations_list     {}
  ;

declarations_list:
    declaration declarations_list     {}
  | declaration       {}
  ;

declaration:
    var_dec     {}
  | func_dec    {}
  ;

func_dec:
    TYPE ID PARENL params_list PARENR STFUNC statement_list ENDFUNC    {printf("FUNCTION DECLARATION\n");}
  | TYPE MAIN PARENL params_list PARENR STFUNC statement_list ENDFUNC    {printf("MAIN DECLARATION\n");}
  ;

params_list:
  | parameter COMMA params_list   {printf("PARAMETER LIST\n");}
  | parameter                     {printf("PARAMETER LIST\n");}
  ;

parameter:
    TYPE ID         {printf("PARAMETER\n");}
  ;

statement_list:
  | statement statement_list      {printf("STATEMENT\n");}
  ;

statement:
    ret_st          {}
  | var_dec         {}
  | io_ops          {}
  | basic_ops       {}
  | assign_value    {}
  | expression      {}
  ;

basic_ops:
    if_ops                                                       {}
  | FOR PARENL log_op PARENR STFUNC statement_list ENDFUNC       {}
  | FORALL PARENL in_set PARENR set_op SEMIC                     {}
  | FORALL PARENL in_set PARENR STFUNC statement_list ENDFUNC    {}
  ;

if_ops:
    IF PARENL log_op PARENR STFUNC statement_list ENDFUNC                                            {}
  | IF PARENL log_op PARENR STFUNC statement_list ENDFUNC ELSE STFUNC statement_list ENDFUNC         {}
  ;

ret_st:
    RETURN expression SEMIC          {printf("RETURN STATEMENT\n");}
  ;

var_dec:
    TYPE ID SEMIC   {printf("VARIABLE DECLARATION\n");}
  ;

io_ops:
    READ PARENL PARENR SEMIC            {printf("READ OPERATION\n");}
  | WRITE PARENL ID PARENR SEMIC        {printf("WRITE OPERATION\n");}
  | WRITE PARENL CHAR PARENR SEMIC      {printf("WRITE OPERATION\n");}
  | WRITE PARENL STRING PARENR SEMIC    {printf("WRITE OPERATION\n");}
  | WRITELN PARENL ID PARENR SEMIC      {printf("WRITELN OPERATION\n");}
  | WRITELN PARENL CHAR PARENR SEMIC    {printf("WRITELN OPERATION\n");}
  | WRITELN PARENL STRING PARENR SEMIC  {printf("WRITELN OPERATION\n");}
  ;

expression:
    ID                            {}
  | INTEGER                       {}
  | DECIMAL                       {}
  | EMPTY                         {}
  | math_op                       {}
  | set_op                        {}
  | log_op                        {}
  | func_call                     {}
  | expression SEMIC              {}
  | PARENL expression PARENR      {}
  ;

math_op:
    expression ADD expression         {printf("ADD OPERATION\n");}
  | expression SUB expression         {printf("SUB OPERATION\n");}
  | expression DIV expression         {printf("DIV OPERATION\n");}
  | expression MULT expression        {printf("MULT OPERATION\n");}
  ;

set_op:
    ADDSET PARENL in_set PARENR        {}
  | REMOVE PARENL in_set PARENR        {}
  | EXISTS PARENL in_set PARENR        {}
  ;

log_op:
    in_set                             {}
  | ISTYPE PARENL expression PARENR    {}
  | expression SMALLER expression      {}
  | expression GREATER expression      {}
  | expression SMALLEQ expression      {}
  | expression GREATEQ expression      {}
  | expression EQUALS expression       {}
  | expression DIFFERENT expression    {}
  | expression OR expression           {}
  | expression AND expression          {}
  | NEG expression                     {}
  ;

func_call:
    ID PARENL args_list PARENR SEMIC   {}
  ;

in_set:
    expression IN expression           {}
  ;

args_list:
  |  expression COMMA args_list              {}
  |  expression
  ;


assign_value:
    ID ASSIGN expression     {printf("ASSIGN EXPRESSION\n");}
  ;



%%
int main(int argc, char *argv[]) {
  Node *tree;

  tree = create_node("value", 'I');
  tree = add_node_left("value", 'S', tree);
  tree -> left = add_node_left("value", 'I', tree -> left);
  tree -> left = add_node_middle("value", 'T', tree -> left);
  tree -> left = add_node_right("value", 'C', tree -> left);
  print_tree(tree);

  printf("\n\n#### INICIANDO TESTE ####\n\n");

  FILE *file;

  file = fopen(argv[1], "r");

  yyparse();
  yylex_destroy();

  fclose(file);

  printf("\n\n#### FIM DO ARQUIVO ####\n\n");

  return 0;
}

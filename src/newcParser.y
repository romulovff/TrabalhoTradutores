%define parse.error verbose
%define lr.type canonical-lr
%debug
%locations

%{

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "tree.h"
#include "symbol.h"

int errors = 0;
int symbolIdCounter = 0;

extern Symbol *symbol_table;

void yyerror(const char* msg) {
  printf("%s\n", msg);
  errors += 1;
}
int yylex();
extern int yylex_destroy(void);

Node *ast_tree = NULL;

%}

%union{
  char *str;
  int integer;
  float dec;

  struct node *ast;
}

%token<str> ID
%token<str> TYPE
%token<str> STRING
%token<str> CHAR
%token<str> EMPTY
%token<str> MAIN
%token<integer> INTEGER
%token<dec> DECIMAL

%left ADD SUB MULT DIV
%left OR AND SMALLER GREATER
%left SMALLEQ GREATEQ EQUALS DIFFERENT
%right ASSIGN NEG

%token IF ELSE FOR READ WRITE WRITELN RETURN
%token IN ISTYPE ADDSET REMOVE EXISTS FORALL
%token COMMA STFUNC ENDFUNC PARENL PARENR SEMIC


%start prog
%type<ast> declarations_list declaration var_dec func_dec params_list parameter statement_list statement
%type<ast> ret_st assign_value math_op set_op in_set basic_ops if_ops io_ops expression operation func_call

%%

prog:
    declarations_list     { ast_tree = $1; }
  ;

declarations_list:
    declarations_list declaration     {}
  | declaration       {}
  ;

declaration:
    var_dec     {}
  | func_dec    {}
  ;

func_dec:
    TYPE ID PARENL params_list PARENR STFUNC statement_list ENDFUNC     {
                                                                          add_symbol(symbolIdCounter, $2, $1[0], 'f');
                                                                          symbolIdCounter++;
                                                                        }
  | TYPE MAIN PARENL params_list PARENR STFUNC statement_list ENDFUNC   {
                                                                          add_symbol(symbolIdCounter, $2, $1[0], 'f');
                                                                          symbolIdCounter++;
                                                                        }
  ;

params_list:
    params_list COMMA parameter   {printf("PARAMETER LIST\n");}
  | parameter                     {printf("PARAMETER LIST\n");}
  |                               {}
  ;

parameter:
    TYPE ID         {printf("PARAMETER\n");}
  ;

statement_list:
    statement_list statement      {printf("STATEMENT\n");}
  |                               {}
  ;

statement:
    expression_stmt {}
  | ret_st          {}
  | var_dec         {}
  | io_ops          {}
  | basic_ops       {}
  ;

expression_stmt:
    expression SEMIC      {}
  ;

basic_ops:
    if_ops                                                       {}
  | FOR PARENL operation PARENR STFUNC statement_list ENDFUNC    {}
  | FORALL PARENL in_set PARENR set_op SEMIC                     {}
  | FORALL PARENL in_set PARENR STFUNC statement_list ENDFUNC    {}
  ;

if_ops:
    IF PARENL operation PARENR STFUNC statement_list ENDFUNC                                            {}
  | IF PARENL operation PARENR STFUNC statement_list ENDFUNC ELSE STFUNC statement_list ENDFUNC         {}
  ;

ret_st:
    RETURN expression SEMIC          {printf("RETURN STATEMENT\n");}
  ;

var_dec:
    TYPE ID SEMIC   {
                      add_symbol(symbolIdCounter, $2, $1[0], 'v');
                      symbolIdCounter++;
                    }
  ;

io_ops:
    READ PARENL PARENR SEMIC            {printf("READ OPERATION\n");}
  | WRITE PARENL expression PARENR SEMIC    {printf("WRITE OPERATION\n");}
  | WRITELN PARENL expression PARENR SEMIC  {printf("WRITELN OPERATION\n");}
  ;

expression:
    set_op                        {}
  | operation                     {}
  | func_call                     {}
  | assign_value                  {}
  ;

term:
    ID                            {}
  | INTEGER                       {}
  | DECIMAL                       {}
  | CHAR                          {}
  | STRING                        {}
  | EMPTY                         {}
  | PARENL expression PARENR      {}
  ;

math_op:
    term DIV expression         {printf("DIV OPERATION\n");}
  | term MULT expression        {printf("MULT OPERATION\n");}
  | term ADD expression         {printf("ADD OPERATION\n");}
  | term SUB expression         {printf("SUB OPERATION\n");}
  | term                        {}
  ;

set_op:
    ADDSET PARENL in_set PARENR        {}
  | REMOVE PARENL in_set PARENR        {}
  | EXISTS PARENL in_set PARENR        {}
  ;

operation:
    math_op
  | in_set                             {}
  | ISTYPE PARENL expression PARENR    {}
  | term SMALLER expression      {}
  | term GREATER expression      {}
  | term SMALLEQ expression      {}
  | term GREATEQ expression      {}
  | term EQUALS expression       {}
  | term DIFFERENT expression    {}
  | term OR expression           {}
  | term AND expression          {}
  | NEG expression                     {}
  ;

func_call:
    ID PARENL args_list PARENR   {}
  ;

in_set:
    term IN expression           {}
  ;

args_list:
    args_list COMMA term              {}
  | term                              {}
  |                                         {}
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

  // add_symbol(1, "nome", 't', 't');
  // print_symbols();

  printf("\n\n#### INICIANDO TESTE ####\n\n");

  FILE *file;

  file = fopen(argv[1], "r");

  yyparse();
  yylex_destroy();

  fclose(file);

  printf("\n\n#### FIM DO ARQUIVO ####\n\n");

  print_symbols();

  return 0;
}

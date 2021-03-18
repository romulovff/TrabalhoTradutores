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
#include "newc.h"

int errors = 0;
int symbolIdCounter = 0;

extern Symbol *symbol_table;
Node *ast_tree = NULL;

int yylex();
void yyerror (const char *msg) {
  printf("\nERRO DE SINTAXE\n");
  printf ("%s, linha: %d, coluna: %d\n", msg,line,word_position);
  errors += 1;
} 
void yyerror(const char* msg);
extern int yylex_destroy(void);

%}

%union{
  char *str;
  int integer;
  float dec;

  struct node *tree_node;
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
%token<str> IN ISTYPE ADDSET REMOVE EXISTS FORALL
%token<str> COMMA STFUNC ENDFUNC PARENL PARENR SEMIC


%start program
%type<tree_node> declarations_list declaration var_dec func_dec params_list parameter statement_list statement for_body
%type<tree_node> ret_st assign_value math_op set_op in_set basic_ops if_ops io_ops expression operation func_call term args_list

%%

program:
    declarations_list     {
                            printf("program -> declarations_list\n");
                          }
  ;

declarations_list:
    declarations_list declaration     {
                                        printf("declarations_list -> declarations_list declaration\n");
                                      }
  | declaration                       {
                                        printf("declarations_list -> declaration\n");
                                      }
  | error                             {yyerror(yymsg);}
  ;

declaration:
    var_dec     {
                  printf("declaration -> var_dec\n");
                }
  | func_dec    {
                  printf("declaration -> func_dec\n");
                }
  ;

func_dec:
    TYPE ID PARENL params_list PARENR STFUNC statement_list ENDFUNC     {
                                                                          add_symbol(symbolIdCounter, $2, "func");
                                                                          symbolIdCounter++;
                                                                          printf("func_dec -> TYPE ID PARENL params_list PARENR STFUNC statement_list ENDFUNC\n");
                                                                        }
  | TYPE MAIN PARENL params_list PARENR STFUNC statement_list ENDFUNC   {
                                                                          symbolIdCounter++;
                                                                          printf("func_dec -> TYPE MAIN PARENL params_list PARENR STFUNC statement_list ENDFUNC\n");
                                                                        }
  ;

params_list:
    params_list COMMA parameter   {
                                    printf("params_list -> params_list COMMA parameter\n");
                                  }
  | parameter                     {
                                    printf("params_list -> parameter\n");
                                  }
  |                               {
                                    printf("params_list -> 'vazio'\n");
                                  }
  | error                         {yyerror(yymsg);}
  ;

parameter:
    TYPE ID         {
                      printf("parameter -> TYPE ID\n");
                    }
  ;

statement_list:
    statement_list statement      {
                                    printf("statement_list -> statement_list statement\n");
                                  }
  |                               {
                                    printf("statement_list -> 'vazio'\n");
                                  }
  | error                         {yyerror(yymsg);}
  ;

statement:
    expression_statement  {
                            printf("statement -> expression_statement\n");
                          }
  | ret_st                {
                            printf("statement -> ret_st\n");
                          }
  | var_dec               {
                            printf("statement -> var_dec\n");
                          }
  | io_ops                {
                            printf("statement -> io_ops\n");
                          }
  | basic_ops             {
                            printf("statement -> basic_ops\n");
                          }
  ;

expression_statement:
    expression SEMIC      {
                            printf("expression_statement -> expression SEMIC\n");
                          }
  ;

basic_ops:
    if_ops                                                        {
                                                                    printf("basic_ops -> if_ops\n");
                                                                  }
  | FOR PARENL for_body PARENR STFUNC statement_list ENDFUNC      {
                                                                    printf("basic_ops -> FOR PARENL for_body PARENR STFUNC statement_list ENDFUNC\n");
                                                                  }
  | FORALL PARENL in_set PARENR set_op SEMIC                      {
                                                                    printf("basic_ops -> FORALL PARENL in_set PARENR set_op SEMIC\n");
                                                                  }
  | FORALL PARENL in_set PARENR STFUNC statement_list ENDFUNC     {
                                                                    printf("basic_ops -> FORALL PARENL in_set PARENR STFUNC statement_list ENDFUNC\n");
                                                                  }
  ;

for_body:
    expression_statement expression_statement expression          {
                                                                    printf("for_body -> expression_statement expression_statement expression\n");
                                                                  }
  | SEMIC expression_statement expression                         {
                                                                    printf("for_body -> SEMIC expression_statement expression\n");
                                                                  }
  ;

if_ops:
    IF PARENL operation PARENR STFUNC statement_list ENDFUNC                                            {
                                                                                                          printf("if_ops -> IF PARENL operation PARENR STFUNC statement_list ENDFUNC\n");
                                                                                                        }
  | IF PARENL operation PARENR STFUNC statement_list ENDFUNC ELSE STFUNC statement_list ENDFUNC         {
                                                                                                          printf("if_ops -> IF PARENL operation PARENR STFUNC statement_list ENDFUNC ELSE STFUNC statement_list ENDFUNC\n");
                                                                                                        }
  ;

ret_st:
    RETURN expression SEMIC         {
                                      printf("ret_st -> RETURN expression SEMIC\n");
                                    }
  ;

var_dec:
    TYPE ID SEMIC   {
                      add_symbol(symbolIdCounter, $2, "var");
                      symbolIdCounter++;
                      printf("var_dec -> TYPE ID SEMIC\n");
                    }
  ;

io_ops:
    READ PARENL PARENR SEMIC                {
                                              printf("io_ops -> READ PARENL PARENR SEMIC\n");
                                            }
  | READ PARENL expression PARENR SEMIC     {
                                              printf("io_ops -> READ PARENL expression PARENR SEMIC\n");
                                            }
  | WRITE PARENL expression PARENR SEMIC    {
                                              printf("io_ops -> WRITE PARENL expression PARENR SEMIC\n");
                                            }
  | WRITELN PARENL expression PARENR SEMIC  {
                                              printf("io_ops -> WRITELN PARENL expression PARENR SEMIC\n");
                                            }
  ;

expression:
    set_op                        {
                                    printf("expression -> set_op\n");
                                  }
  | operation                     {
                                    printf("expression -> operation\n");
                                  }
  | func_call                     {
                                    printf("expression -> func_call\n");
                                  }
  | assign_value                  {
                                    printf("expression -> assign_value\n");
                                  }
  ;

term:
    ID                            {
                                    printf("term -> ID\n");
                                  }
  | INTEGER                       {
                                    printf("term -> INTEGER\n");
                                  }
  | DECIMAL                       {
                                    printf("term -> DECIMAL\n");
                                  }
  | CHAR                          {
                                    printf("term -> CHAR\n");
                                  }
  | STRING                        {
                                    printf("term -> STRING\n");
                                  }
  | EMPTY                         {
                                    printf("term -> EMPTY\n");
                                  }
  | PARENL expression PARENR      {
                                    printf("term -> PARENL expression PARENR\n");
                                  }
  ;

math_op:
    term DIV expression         {
                                  printf("math_op -> term DIV expression\n");
                                }
  | term MULT expression        {
                                  printf("math_op -> term MULT expression\n");
                                }
  | term ADD expression         {
                                  printf("math_op -> term ADD expression\n");
                                }
  | term SUB expression         {
                                  printf("math_op -> term SUB expression\n");
                                }
  | term                        {
                                  printf("math_op -> term\n");
                                }
  ;

set_op:
    ADDSET PARENL in_set PARENR         {
                                          printf("set_op -> ADDSET PARENL in_set PARENR\n");
                                        }
  | REMOVE PARENL in_set PARENR         {
                                          printf("set_op -> REMOVE PARENL in_set PARENR\n");
                                        }
  | EXISTS PARENL in_set PARENR         {
                                          printf("set_op -> EXISTS PARENL in_set PARENR\n");
                                        }
  ;

operation:
    math_op                             {
                                          printf("operation -> math_op\n");
                                        }
  | in_set                              {
                                          printf("operation -> in_set\n");
                                        }
  | ISTYPE PARENL expression PARENR     {
                                          printf("operation -> ISTYPE PARENL expression PARENR\n");
                                        }
  | term SMALLER expression             {
                                          printf("operation -> term < expression\n");
                                        }
  | term GREATER expression             {
                                          printf("operation -> term > expression\n");
                                        }
  | term SMALLEQ expression             {
                                          printf("operation -> term <= expression\n");
                                        }
  | term GREATEQ expression             {
                                          printf("operation -> term >= expression\n");
                                        }
  | term EQUALS expression              {
                                          printf("operation -> term == expression\n");
                                        }
  | term DIFFERENT expression           {
                                          printf("operation -> term != expression\n");
                                        }
  | term OR expression                  {
                                          printf("operation -> term || expression\n");
                                        }
  | term AND expression                 {
                                          printf("operation -> term && expression\n");
                                        }
  | NEG expression                      {
                                          printf("operation -> ! expression\n");
                                        }
  ;

func_call:
    ID PARENL args_list PARENR    {
                                    printf("func_call -> ID PARENL args_list PARENR\n");
                                  }
  ;

in_set:
    term IN expression            {
                                    printf("in_set -> Iterm IN expression\n");
                                  }
  ;

args_list:
    args_list COMMA term              {
                                        printf("args_list -> Iargs_list COMMA term\n");
                                      }
  | term                              {
                                        printf("args_list -> Iterm\n");
                                      }
  |                                   {
                                        printf("args_list -> I'vazio'\n");
                                      }
  ;


assign_value:
    ID ASSIGN expression      {
                                printf("assign_value -> ID ASSIGN expression\n");
                              }
  ;



%%

int main(int argc, char *argv[]) {

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

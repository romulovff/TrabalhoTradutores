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
%token<str> IN ISTYPE ADDSET REMOVE EXISTS FORALL
%token<str> COMMA STFUNC ENDFUNC PARENL PARENR SEMIC


%start prog
%type<ast> declarations_list declaration var_dec func_dec params_list parameter statement_list statement
%type<ast> ret_st assign_value math_op set_op in_set basic_ops if_ops io_ops expression operation func_call term args_list

%%

prog:
    declarations_list     {

                          }
  ;

declarations_list:
    declarations_list declaration     {
                                        // $1 -> value = "declarations_list";
                                        // $2 -> value = "declaration";
                                        // $$ = create_node2("declarations_list", $1, $2);
                                        // printf("%s ", $1 -> value);
                                        // printf("%s\n", $2 -> value);
                                      }
  | declaration       {
                        // $1 -> value = "declaration";
                        // $$ = create_node1("declarations_list", $1);
                        // printf("%s\n", $1 -> value);
                      }
  | error {yyerror(yymsg);}
  ;

declaration:
    var_dec     {
                  // $1 -> value = "var_dec";
                  // $$ = create_node1("declaration", $1);
                  // printf("%s\n", $1 -> value);
                }
  | func_dec    {
                  // $1 -> value = "func_dec";
                  // $$ = create_node1("declaration", $1);
                  // printf("%s\n", $1 -> value);
                }
  ;

func_dec:
    TYPE ID PARENL params_list PARENR STFUNC statement_list ENDFUNC     {
                                                                          add_symbol(symbolIdCounter, $2, $1[0], 'f');
                                                                          symbolIdCounter++;
                                                                          // Node *node0 = (Node *)calloc(1, sizeof(Node));
                                                                          // Node *node1 = (Node *)calloc(1, sizeof(Node));
                                                                          // Node *node2 = (Node *)calloc(1, sizeof(Node));
                                                                          // Node *node3 = (Node *)calloc(1, sizeof(Node));
                                                                          // Node *node4 = (Node *)calloc(1, sizeof(Node));
                                                                          // Node *node5 = (Node *)calloc(1, sizeof(Node));
                                                                          // node0 -> value = $1;
                                                                          // node1 -> value = $2;
                                                                          // node2 -> value = $3;
                                                                          // node3 -> value = $5;
                                                                          // node4 -> value = $6;
                                                                          // node5 -> value = $8;
                                                                          // $4 -> value = "params_list";
                                                                          // $7 -> value = "statement_list";
                                                                          // $$ = create_node8("func_dec", node0, node1, node2, $4, node3, node4, $7, node5);
                                                                          // printf("%s ", $1);
                                                                          // printf("%s ", $2);
                                                                          // printf("%s ", $3);
                                                                          // printf("%s ", $4 -> value);
                                                                          // printf("%s ", $5);
                                                                          // printf("%s ", $6);
                                                                          // printf("%s ", $7 -> value);
                                                                          // printf("%s \n", $8);
                                                                          // free(node0);
                                                                          // free(node1);
                                                                          // free(node2);
                                                                          // free(node3);
                                                                          // free(node4);
                                                                          // free(node5);
                                                                        }
  | TYPE MAIN PARENL params_list PARENR STFUNC statement_list ENDFUNC   {
                                                                          add_symbol(symbolIdCounter, $2, $1[0], 'f');
                                                                          symbolIdCounter++;
                                                                          // Node *node0 = (Node *)calloc(1, sizeof(Node));
                                                                          // Node *node1 = (Node *)calloc(1, sizeof(Node));
                                                                          // Node *node2 = (Node *)calloc(1, sizeof(Node));
                                                                          // Node *node3 = (Node *)calloc(1, sizeof(Node));
                                                                          // Node *node4 = (Node *)calloc(1, sizeof(Node));
                                                                          // Node *node5 = (Node *)calloc(1, sizeof(Node));
                                                                          // node0 -> value = $1;
                                                                          // node1 -> value = $2;
                                                                          // node2 -> value = $3;
                                                                          // node3 -> value = $5;
                                                                          // node4 -> value = $6;
                                                                          // node5 -> value = $8;
                                                                          // $4 -> value = "params_list";
                                                                          // $7 -> value = "statement_list";
                                                                          // $$ = create_node8("func_dec_main", node0, node1, node2, $4, node3, node4, $7, node5);
                                                                          // printf("%s ", $1);
                                                                          // printf("%s ", $2);
                                                                          // printf("%s ", $3);
                                                                          // printf("%s ", $4 -> value);
                                                                          // printf("%s ", $5);
                                                                          // printf("%s ", $6);
                                                                          // printf("%s ", $7 -> value);
                                                                          // printf("%s \n", $8);
                                                                          // free(node0);
                                                                          // free(node1);
                                                                          // free(node2);
                                                                          // free(node3);
                                                                          // free(node4);
                                                                          // free(node5);
                                                                        }
  ;

params_list:
    params_list COMMA parameter   {
                                    // Node *node0 = (Node *)calloc(1, sizeof(Node));
                                    // node0 -> value = $2;
                                    // $1 -> value = "params_list";
                                    // $3 -> value = "parameter";
                                    // $$ = create_node3("params_list", $1, node0, $3);
                                    // printf("%s ", $1 -> value);
                                    // printf("%s ", node0 -> value);
                                    // printf("%s \n", $3 -> value);
                                    // free(node0);
                                  }
  | parameter                     {
                                    // $1 -> value = "parameter";
                                    // $$ = create_node1("params_list", $1);
                                    // printf("%s\n", $1 -> value);
                                  }
  |                               {
                                    
                                  }
  | error {yyerror(yymsg);}
  ;

parameter:
    TYPE ID         {
                      // Node *node0 = (Node *)calloc(1, sizeof(Node));
                      // Node *node1 = (Node *)calloc(1, sizeof(Node));
                      // node0 -> value = $1;
                      // node1 -> value = $2;
                      // $$ = create_node2("parameter", node0, node1);
                      // printf("%s ", node0 -> value);
                      // printf("%s\n", node1 -> value);
                      // free(node0);
                      // free(node1);
                    }
  ;

statement_list:
    statement_list statement      {}
  |                               {}
  | error {yyerror(yymsg);}
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
  | FORALL PARENL in_set PARENR set_op SEMIC                      {
                                                                    // Node *node0 = (Node *)calloc(1, sizeof(Node));
                                                                    // Node *node1 = (Node *)calloc(1, sizeof(Node));
                                                                    // Node *node2 = (Node *)calloc(1, sizeof(Node));
                                                                    // Node *node3 = (Node *)calloc(1, sizeof(Node));
                                                                    // node0 -> value = $1;
                                                                    // node1 -> value = $2;
                                                                    // node2 -> value = $4;
                                                                    // node3 -> value = $6;
                                                                    // $$ = create_node6("basic_ops", node0, node1, $3, node2, $5, node3);
                                                                    // printf("%s ", node0 -> value);
                                                                    // printf("%s ", node1 -> value);
                                                                    // printf("%s ", $3 -> value);
                                                                    // printf("%s ", node2 -> value);
                                                                    // printf("%s ", $5 -> value);
                                                                    // printf("%s\n", node3 -> value);
                                                                    // free(node0);
                                                                    // free(node1);
                                                                    // free(node2);
                                                                    // free(node3);
                                                                  }
  | FORALL PARENL in_set PARENR STFUNC statement_list ENDFUNC    {}
  ;

if_ops:
    IF PARENL operation PARENR STFUNC statement_list ENDFUNC                                            {}
  | IF PARENL operation PARENR STFUNC statement_list ENDFUNC ELSE STFUNC statement_list ENDFUNC         {}
  ;

ret_st:
    RETURN expression SEMIC          {printf("RETURN\n");}
  ;

var_dec:
    TYPE ID SEMIC   {
                      add_symbol(symbolIdCounter, $2, $1[0], 'v');
                      symbolIdCounter++;
                    }
  ;

io_ops:
    READ PARENL PARENR SEMIC                {}
  | WRITE PARENL expression PARENR SEMIC    {}
  | WRITELN PARENL expression PARENR SEMIC  {}
  ;

expression:
    set_op                        {}
  | operation                     {}
  | func_call                     {}
  | assign_value                  {}
  ;

term:
    ID                            {}
  | INTEGER                       {
                                    // char *result;
                                    // sprintf(result, "%d", $1);
                                    // $$ -> value = result;
                                  }
  | DECIMAL                       {}
  | CHAR                          {}
  | STRING                        {}
  | EMPTY                         {}
  | PARENL expression PARENR      {}
  ;

math_op:
    term DIV expression         {
                                  
                                }
  | term MULT expression        {
                                  
                                }
  | term ADD expression         {
                                  
                                }
  | term SUB expression         {
                                  
                                }
  | term                        {
                                }
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
    ID PARENL args_list PARENR    {
                                    // Node *node0 = (Node *)calloc(1, sizeof(Node));
                                    // Node *node1 = (Node *)calloc(1, sizeof(Node));
                                    // Node *node2 = (Node *)calloc(1, sizeof(Node));
                                    // node0 -> value = $1;
                                    // node1 -> value = $2;
                                    // node2 -> value = $4;
                                    // $$ = create_node4("basic_ops", node0, node1, $3, node2);
                                    // printf("%s ", node0 -> value);
                                    // printf("%s ", node1 -> value);
                                    // printf("%s ", $3 -> value);
                                    // printf("%s ", node2 -> value);
                                    // free(node0);
                                    // free(node1);
                                    // free(node2);
                                  }
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
    ID ASSIGN expression     {}
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

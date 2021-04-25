%define parse.error verbose
%define lr.type canonical-lr
%debug
%locations

%{

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>
#include "tree.h"
#include "symbol.h"
#include "newc.h"
#include "utils.h"

int errors = 0;
int semanticErrors = 0;
int symbolIdCounter = 0;
int scope = 0;
int parameters = 0;
int args_params = 0;
int has_main = 0;

extern Symbol *symbol_table;
Node *ast_tree = NULL;
extern Scope *stack_scope;

int yylex();
void yyerror (const char *msg) {
  printf("\nERRO DE SINTAXE\n");
  printf ("%s, linha: %d, coluna: %d\n", msg,line,word_position);
  errors += 1;
}
void yyerror(const char* msg);
extern int yylex_destroy(void);
extern FILE *yyin;

%}

%union{
  int integer;
  char *str;
  char character;
  float dec;

  struct node *tree_node;
}

%token<str> ID
%token<str> TYPE
%token<str> STRING
%token<str> CHAR
%token<str> EMPTY
%token<str> MAIN
%token<str> ERRORTOKEN
%token<integer> INTEGER
%token<dec> DECIMAL

%left ADD SUB MULT DIV
%left OR AND SMALLER GREATER
%left SMALLEQ GREATEQ EQUALS DIFFERENT
%right ASSIGN NEG

%token<str> ADD SUB MULT DIV
%token<str> OR AND SMALLER GREATER
%token<str> SMALLEQ GREATEQ EQUALS DIFFERENT
%token<str> ASSIGN NEG

%token<str> IF ELSE FOR READ WRITE WRITELN RETURN
%token<str> IN ISTYPE ADDSET REMOVE EXISTS FORALL
%token<str> COMMA STFUNC ENDFUNC PARENL PARENR SEMIC

%nonassoc OUTERTHEN
%nonassoc ELSE

%start program
%type<tree_node> program
%type<tree_node> declarations_list declaration var_dec func_dec params_list parameter statement_list statement for_body expression_statement for_statement else_statement
%type<tree_node> ret_st assign_value math_op set_op in_set basic_ops if_ops io_ops expression operation func_call term args_list error if_statement forall_statement math_op_muldiv

%%

program:
    declarations_list     {
                            ast_tree = $$;
                          }
  ;

declarations_list:
    declarations_list declaration     {
                                        $$ = create_node2("declarations_list declaration", $1, $2);
                                      }
  | declaration                       {
                                        $$ = create_node1("declaration", $1);
                                      }
  | error                             {
                                        $$ = create_node_empty();
                                        errors += 1;
                                        yyerror(yymsg);
                                      }
  ;

declaration:
    var_dec     {
                  $$ = create_node1("var_dec", $1);
                }
  | func_dec    {
                  $$ = create_node1("func_dec", $1);
                }
  ;

func_dec:
    TYPE ID PARENL {
      scope++;
      push_stack(scope);
    } params_list PARENR STFUNC {
      errors += add_symbol($2, "func", $1, STACK_TOP(stack_scope) -> value, parameters);
      parameters = 0;
    } statement_list ENDFUNC  {
      $$ = create_node4("TYPE ID PARENL params_list PARENR STFUNC statement_list ENDFUNC", create_node0($1), create_node0($2), $5, $9);
      pop_stack();
      if(check_types_return_function($9 -> returnType, $1[0]) == 0) {
        printf("ERRO SEMATICO\n");
        printf("FUNCAO %s COM RETORNO INESPERADO, linha %d, coluna %d\n\n", $2, line, word_position);
        semanticErrors += 1;
      }else if(check_types_return_function($9 -> returnType, $1[0]) == 1) {
        printf("ERRO SEMATICO\n");
        printf("FUNCAO %s SEM RETORNO ESPERADO, linha %d, coluna %d\n\n", $2, line, word_position);
        semanticErrors += 1;
      } else if (check_types_return_function($9 -> returnType, $1[0]) == 3) {
        printf("ERRO SEMATICO\n");
        printf("FUNCAO %s COM RETORNO DE TIPO ERRADO, linha %d, coluna %d\n\n", $2, line, word_position);
        semanticErrors += 1;
      }
    }
  | TYPE MAIN PARENL {
      scope++;
      push_stack(scope);
    } params_list PARENR STFUNC {
      semanticErrors += add_symbol($2, "func", $1, STACK_TOP(stack_scope) -> value, parameters);
      parameters = 0;
    } statement_list ENDFUNC {
      symbolIdCounter++;
      $$ = create_node4("TYPE MAIN PARENL params_list PARENR STFUNC statement_list ENDFUNC", create_node0($1), create_node0($2), $5, $9);
      has_main++;
      pop_stack();
      if(check_types_return_function($9 -> returnType, $1[0]) == 0) {
        printf("ERRO SEMATICO\n");
        printf("FUNCAO %s COM RETORNO INESPERADO, linha %d, coluna %d\n\n", $2, line, word_position);
        semanticErrors += 1;
      }else if(check_types_return_function($9 -> returnType, $1[0]) == 1) {
        printf("ERRO SEMATICO\n");
        printf("FUNCAO %s SEM RETORNO ESPERADO, linha %d, coluna %d\n\n", $2, line, word_position);
        semanticErrors += 1;
      } else if (check_types_return_function($9 -> returnType, $1[0]) == 3) {
        printf("ERRO SEMATICO\n");
        printf("FUNCAO %s COM RETORNO DE TIPO ERRADO, linha %d, coluna %d\n\n", $2, line, word_position);
        semanticErrors += 1;
      }
    }
  ;

params_list:
    params_list COMMA parameter {
      $$ = create_node2("params_list COMMA parameter", $1, $3);
    }
  | parameter {
      $$ = create_node1("parameter", $1);
    }
  | {
      $$ = create_node0("vazio");
    }
  | error {
      $$ = create_node_empty();
      errors += 1;
      yyerror(yymsg);
    }
  ;

parameter:
    TYPE ID {
      parameters++;
      $$ = create_node2("TYPE ID", create_node0($1), create_node0($2));
      semanticErrors += add_symbol($2, "param", $1, STACK_TOP(stack_scope) -> value, 0);
    }
  ;

statement_list:
    statement_list statement {
      $$ = create_node2("statement_list statement", $1, $2);
      $$ -> returnType = $2 -> returnType;
    }
  | {
      $$ = create_node0("vazio");
    }
  | error {
      $$ = create_node_empty();
    }
  ;

statement:
    expression_statement {
      $$ = create_node1("expression_statement", $1);
    }
  | ret_st {
      $$ = create_node1("ret_st", $1);
      $$ -> returnType = $1 -> returnType;
    }
  | var_dec {
      $$ = create_node1("var_dec", $1);
    }
  | io_ops {
      $$ = create_node1("io_ops", $1);
    }
  | basic_ops {
      $$ = create_node1("basic_ops", $1);
    }
  ;

expression_statement:
    expression SEMIC {
      $$ = create_node1("expression SEMIC", $1);
    }
  ;

basic_ops:
    if_ops {
      $$ = create_node1("if_ops", $1);
    }
  | for_statement STFUNC statement_list ENDFUNC {
      pop_stack();
      $$ = create_node2("FOR PARENL for_body PARENR STFUNC statement_list ENDFUNC", $1, $3);
    }
  | forall_statement set_op SEMIC {
      pop_stack();
      $$ = create_node2("FORALL PARENL in_set PARENR set_op SEMIC ", $1, $2);
    }
  | forall_statement STFUNC statement_list ENDFUNC {
      pop_stack();
      $$ = create_node2("FORALL PARENL in_set PARENR STFUNC statement_list ENDFUNC", $1, $3);
    }
  ;

for_statement:
  FOR PARENL for_body PARENR {
    scope++;
    push_stack(scope);
    $$ = create_node2("FOR PARENL for_body PARENR", create_node0($1), $3);
  }
  ;

forall_statement:
  FORALL PARENL in_set PARENR {
    scope++;
    push_stack(scope);
    $$ = create_node2("FORALL PARENL for_body PARENR", create_node0($1), $3);
  }
  ;

for_body:
    expression_statement expression_statement expression {
      $$ = create_node3("expression_statement expression_statement expression", $1, $2, $3);
    }
  | SEMIC expression_statement expression {
      $$ = create_node2("SEMIC expression_statement expression", $2, $3);
    }
  ;

if_ops:
    if_statement statement %prec OUTERTHEN {
      $$ = create_node2("if_statement statement", $1, $2);
    }
  | if_statement statement else_statement {
      pop_stack();
      $$ = create_node3("if_statement statement else_statement", $1, $2, $3);
    }
  | if_statement STFUNC statement_list ENDFUNC %prec OUTERTHEN {
      pop_stack();
      $$ = create_node2("if_statement STFUNC statement_list ENDFUNC", $1, $3);
    }
  | if_statement STFUNC statement_list ENDFUNC else_statement {
      $$ = create_node3("if_statement STFUNC statement_list ENDFUNC else_statement", $1, $3, $5);
    }
  ;

if_statement:
    IF PARENL operation PARENR {
      scope++;
      push_stack(scope);
      $$ = create_node2("IF PARENL operation PARENR", create_node0($1), $3);
    }
  ;

else_statement:
    ELSE {
      pop_stack();
      scope++;
      push_stack(scope);
    }
    statement {
      pop_stack();
      $$ = create_node2("ELSE statement_list", create_node0($1), $3);
    }
  | ELSE {
      pop_stack();
      scope++;
      push_stack(scope);
    } STFUNC statement_list ENDFUNC {
      pop_stack();
      $$ = create_node2("ELSE STFUNC statement_list ENDFUNC", create_node0($1), $4);
    }
  ;


ret_st:
    RETURN expression SEMIC {
      $$ = create_node2("RETURN expression SEMIC", create_node0($1), $2);
      $$ -> returnType = $2 -> type;
    }
  ;

var_dec:
    TYPE ID SEMIC {
      semanticErrors += add_symbol($2, "var", $1, STACK_TOP(stack_scope) -> value, 0);
      $$ = create_node2("TYPE ID SEMIC", create_node0($1), create_node0($2));
    }
  ;

io_ops:
    READ PARENL PARENR SEMIC {
      $$ = create_node1("READ PARENL PARENR SEMIC", create_node0($1));
    }
  | READ PARENL expression PARENR SEMIC {
      $$ = create_node2("READ PARENL expression PARENR SEMIC", create_node0($1), $3);
    }
  | WRITE PARENL expression PARENR SEMIC {
      $$ = create_node2("WRITE PARENL expression PARENR SEMIC", create_node0($1), $3);
    }
  | WRITELN PARENL expression PARENR SEMIC {
      $$ = create_node2("WRITELN PARENL expression PARENR SEMIC", create_node0($1), $3);
    }
  ;

expression:
    set_op {
      $$ = create_node1("set_op", $1);
      $$ -> type = $1 -> type;
    }
  | func_call {
      $$ = create_node1("func_call", $1);
    }
  | assign_value {
      $$ = create_node1("assign_value", $1);
    }
  ;

term:
    ID {
      struct symbol *s = check_is_in_scope($1, STACK_TOP(stack_scope) -> value);
      if (s != NULL) {
        $$ = create_node1("ID", create_node0_string($1));
        $$ -> type = s -> returnFuncVarType[0];
      }
      else{
        printf("ERRO SEMATICO\n");
        printf("VARIAVEL %s NAO DECLARADA, linha %d, coluna %d\n\n", $1, line, word_position);
        semanticErrors += 1;
        $$ = create_node_empty();
      }
    }
  | INTEGER {
      $$ = create_node1("INTEGER", create_node0_int($1, 'i'));
      $$ -> type = 'i';
    }
  | DECIMAL {
      $$ = create_node1("DECIMAL", create_node0_dec($1, 'f'));
      $$ -> type = 'f';
    }
  | CHAR {
      $$ = create_node1("CHAR", create_node0_char($1, 'c'));
      $$ -> type = 'c';
    }
  | STRING {
      $$ = create_node1("STRING", create_node0($1));
      $$ -> type = 's';
    }
  | EMPTY {
      $$ = create_node1("EMPTY", create_node0($1));
      $$ -> type = 'e';
    }
  | PARENL expression PARENR {
      $$ = create_node1("PARENL expression PARENR", $2);
      $$ -> type = $2 -> type;
    }
  | ERRORTOKEN {
      $$ = create_node_empty();
    }
  ;

math_op:
    math_op ADD math_op_muldiv {
      $$ = create_node3("math_op ADD math_op_muldiv", $1, create_node0("+"), $3);
      $$ -> type = check_types($1 -> type, $3 -> type);
    }
  | math_op SUB math_op_muldiv {
      $$ = create_node3("math_op SUB math_op_muldiv", $1, create_node0("-"), $3);
      $$ -> type = check_types($1 -> type, $3 -> type);
    }
  | math_op_muldiv {
      $$ = create_node1("math_op_muldiv", $1);
      $$ -> type = $1 -> type;
    }
  ;

math_op_muldiv:
    math_op_muldiv DIV term {
      $$ = create_node3("math_op_muldiv DIV term", $1, create_node0("/"), $3);
      $$ -> type = check_types($1 -> type, $3 -> type);
    }
  | math_op_muldiv MULT term {
      $$ = create_node3("math_op_muldiv MULT term", $1, create_node0("*"), $3);
      $$ -> type = check_types($1 -> type, $3 -> type);
    }
  | term {
      $$ = create_node1("term", $1);
      $$ -> type = $1 -> type;
    }
  ;

set_op:
    ADDSET PARENL set_op PARENR {
      $$ = create_node2("ADDSET PARENL set_op PARENR", create_node0($1), $3);
    }
  | REMOVE PARENL set_op PARENR {
      $$ = create_node2("REMOVE PARENL set_op PARENR", create_node0($1), $3);
    }
  | EXISTS PARENL set_op PARENR {
      $$ = create_node2("EXISTS PARENL set_op PARENR", create_node0($1), $3);
    }
  | operation {
      $$ = create_node1("operation", $1);
      $$ -> type = $1 -> type;
    }
  ;

operation:
    math_op {
      $$ = create_node1("math_op", $1);
      $$ -> type = $1 -> type;
    }
  | in_set {
      $$ = create_node1("in_set", $1);
    }
  | ISTYPE PARENL expression PARENR {
      $$ = create_node2("ISTYPE PARENL expression PARENR", create_node0($1), $3);
    }
  | term SMALLER expression {
      $$ = create_node3("term SMALLER expression", $1, create_node0("<"), $3);
    }
  | term GREATER expression {
      $$ = create_node3("term GREATER expression", $1, create_node0(">"), $3);
    }
  | term SMALLEQ expression {
      $$ = create_node3("term SMALLEQ expression", $1, create_node0("<="), $3);
    }
  | term GREATEQ expression {
      $$ = create_node3("term GREATEQ expression", $1, create_node0(">="), $3);
    }
  | term EQUALS expression {
      $$ = create_node3("term EQUALS expression", $1, create_node0("=="), $3);
    }
  | term DIFFERENT expression {
      $$ = create_node3("term DIFFERENT expression", $1, create_node0("!="), $3);
    }
  | term OR expression {
      $$ = create_node3("term OR expression", $1, create_node0("||"), $3);
    }
  | term AND expression {
      $$ = create_node3("term AND expression", $1, create_node0("&&"), $3);
    }
  | NEG expression {
      $$ = create_node2("NEG expression", create_node0("!"), $2);
    }
  ;

func_call:
    ID PARENL args_list PARENR {
      if (find_symbol_func($1) != NULL){
        if (check_number_of_params(args_params, $1)){
          args_params = 0;
          $$ = create_node2("ID PARENL args_list PARENR", create_node0($1), $3);
        }else{
          printf("ERRO SEMATICO\n");
          printf("FUNÇAO %s COM NUMERO DE PARAMETROS INVALIDOS NA INVOCAÇÃO, linha %d, coluna %d\n\n", $1, line, word_position);
          semanticErrors += 1;
          args_params = 0;
          $$ = create_node_empty();
        }
      }else {
        printf("ERRO SEMATICO\n");
        printf("FUNÇAO %s NAO DECLARADA, linha %d, coluna %d\n\n", $1, line, word_position);
        semanticErrors += 1;
        args_params = 0;
        $$ = create_node_empty();
      }
    }
  ;

in_set:
    term IN expression {
      $$ = create_node3("term IN expression", $1, create_node0($2), $3);
    }
  ;

args_list:
    args_list COMMA term {
      args_params++;
      $$ = create_node2("args_list COMMA term", $1, $3);
    }
  | term {
      args_params++;
      $$ = create_node1("term", $1);
    }
  | {
      $$ = create_node0("vazio");
    }
  ;


assign_value:
    ID ASSIGN expression {
      struct symbol *s = check_is_in_scope($1, STACK_TOP(stack_scope) -> value);
      if (s != NULL){
        $$ = create_node3("ID ASSIGN expression", create_node0($1), create_node0("="), $3);
        $$ -> type = s -> returnFuncVarType[0];
        if(!check_types_var(s -> returnFuncVarType[0], $3 -> type)) {
          printf("ERRO SEMATICO\n");
          printf("VARIAVEL %s DO TIPO %s RECEBENDO VALOR DE TIPO INVALIDO, linha %d, coluna %d\n\n", $1, s -> returnFuncVarType, line, word_position);
          semanticErrors += 1;
        }
      }else{
        printf("ERRO SEMATICO\n");
        printf("VARIAVEL %s NAO DECLARADA, linha %d, coluna %d\n\n", $1, line, word_position);
        semanticErrors += 1;
        $$ = create_node_empty();
      }
    }
  ;



%%

int main(int argc, char *argv[]) {

  push_stack(0);

  ast_tree = NULL;

  yyin = fopen(argv[1], "r");

  yyparse();

  if(has_main == 0) {
    printf("ERRO SEMÂNTICO\n");
    printf("FUNÇÃO MAIN NÃO ENCONTRADA\n\n");
    semanticErrors += 1;
  } else if (has_main > 1) {
    printf("ERRO SEMÂNTICO\n");
    printf("MAIS DE UMA FUNÇÃO MAIN ENCONTRADA\n\n");
    semanticErrors += 1;
  }

  print_symbols();

  if (errors == 0) {
    printf("\n\n#### INICIO DA ÁRVORE SINTÁTICA ####\n\n");
    print_tree(ast_tree);
    printf("\n\n#### FIM DA ÁRVORE SINTÁTICA ####\n\n");
    if (semanticErrors > 0) {
      printf("\n\nFORAM ENCONTRADAS %d WARNINGS NO CODIGO\n\n", semanticErrors);
    }
  } else {
    printf("\n\nFORAM ENCONTRADOS %d ERROS E %d WARNINGS NO CODIGO\n\n", errors, semanticErrors);
    free_tree(ast_tree);
  }

  free_symbol_table();

  free_stack();

  fclose(yyin);

  yylex_destroy();

  return 0;
}

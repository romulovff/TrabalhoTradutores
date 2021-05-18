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
#include "codegen.h"
#define _GNU_SOURCE

int errors = 0;
int semanticErrors = 0;
int symbolIdCounter = 0;
int scope = 0;
int parameters = 0;
int args_params = 0;
int has_main = 0;
int var_reg = 0;
int if_id = 0;

extern Symbol *symbol_table;
Node *ast_tree = NULL;
extern Scope *stack_scope;
extern Scope *stack_ifelse;
extern FILE *tacfile;
extern Codegen *codegen;
extern Codegen *current_line;

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
%token<integer> INTEGER
%token<dec> DECIMAL

%token<str> ADD SUB MULT DIV
%token<str> OR AND SMALLER GREATER
%token<str> SMALLEQ GREATEQ EQUALS DIFFERENT
%token<str> ASSIGN NEG

%left ADD SUB MULT DIV
%left EQUALS DIFFERENT SMALLEQ GREATEQ
%left OR AND SMALLER GREATER
%right ASSIGN NEG

%token<str> IF ELSE FOR READ WRITE WRITELN RETURN
%token<str> IN ISTYPE ADDSET REMOVE EXISTS FORALL
%token<str> COMMA STFUNC ENDFUNC PARENL PARENR SEMIC

%nonassoc OUTERTHEN
%nonassoc ELSE

%start program
%type<tree_node> program
%type<tree_node> declarations_list declaration var_dec func_dec params_list parameter statement_list statement for_body expression_statement for_statement else_statement str_term or_operation equality_operation negation_operation
%type<tree_node> ret_st assign_value math_op many_operations in_set basic_ops if_ops io_ops expression operation func_call term args_list error if_statement forall_statement math_op_muldiv math_term and_operation relational_operation

%%

program:
    declarations_list {
      ast_tree = $$;
    }
  ;

declarations_list:
    declarations_list declaration {
      $$ = create_node2("declarations_list declaration", $1, $2);
    }
  | declaration {
      $$ = create_node1("declaration", $1);
    }
  | error {
      $$ = create_node_empty();
      errors += 1;
      yyerror(yymsg);
    }
  ;

declaration:
    var_dec {
      $$ = create_node1("var_dec", $1);
    }
  | func_dec{
      $$ = create_node1("func_dec", $1);
    }
  ;

func_dec:
    TYPE ID PARENL {
      scope++;
      push_stack(scope);
    } params_list PARENR STFUNC {
      UT_string *r;
      utstring_new(r);
      errors += add_symbol($2, "func", $1, STACK_TOP(stack_scope) -> value, parameters, r);
      add_func($2);
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
      UT_string *r;
      utstring_new(r);
      semanticErrors += add_symbol($2, "func", $1, STACK_TOP(stack_scope) -> value, parameters, r);
      add_func($2);
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
      semanticErrors += add_symbol($2, "param", $1, STACK_TOP(stack_scope) -> value, 0, create_new_reg(var_reg));
      var_reg++;
    }
  ;

statement_list:
    statement_list statement {
      $$ = create_node2("statement_list statement", $1, $2);
      if($1 -> returnType == 'x')
        $$ -> returnType = $2 -> returnType;
      else
        $$ -> returnType = $1 -> returnType;
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
      $$ -> type = $1 -> type;
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
      $$ -> type = $1 -> type;
    }
  ;

basic_ops:
    if_ops {
      $$ = create_node1("if_ops", $1);
    }
  | for_statement STFUNC statement_list ENDFUNC {
      pop_stack();
      $$ = create_node2("for_statement STFUNC statement_list ENDFUNC", $1, $3);
    }
  | for_statement statement {
      pop_stack();
      $$ = create_node2("for_statement statement", $1, $2);
    }
  | forall_statement statement {
      pop_stack();
      $$ = create_node2("forall_statement many_operations SEMIC ", $1, $2);
    }
  | forall_statement STFUNC statement_list ENDFUNC {
      pop_stack();
      $$ = create_node2("forall_statement STFUNC statement_list ENDFUNC", $1, $3);
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
  | many_operations {
      $$ = create_node1("many_operations", $1);
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
    IF PARENL expression PARENR {
      scope++;
      push_stack(scope);
      $$ = create_node2("IF PARENL expression PARENR", create_node0($1), $3);
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
      semanticErrors += add_symbol($2, "var", $1, STACK_TOP(stack_scope) -> value, 0, create_new_reg(var_reg));
      UT_string *s;
      if($1[0] == 'i' || $1[0] == 'e') {
        utstring_new(s);
        utstring_printf(s, "$%d", var_reg);

        var_dec_assign(utstring_body(s), "0");
      } else if($1[0] == 'f') {
        utstring_new(s);
        utstring_printf(s, "$%d", var_reg);

        var_dec_assign(utstring_body(s), "0.0");
      } else if($1[0] == 's') {
        utstring_new(s);
        utstring_printf(s, "$%d", var_reg);

        var_dec_assign(utstring_body(s), "EMPTY");
      }
      var_reg++;
      $$ = create_node2("TYPE ID SEMIC", create_node0($1), create_node0($2));
    }
  ;

io_ops:
    READ PARENL ID PARENR SEMIC {
      struct symbol *s = check_is_in_scope($3, STACK_TOP(stack_scope) -> value);
      if (s != NULL) {
        $$ = create_node2("READ PARENL ID PARENR SEMIC", create_node0($1), create_node0($3));
        read_func(utstring_body(s -> var_reg), s -> returnFuncVarType[0]);
        $$ -> saved = utstring_body(s -> var_reg);
      } else {
        printf("ERRO SEMATICO\n");
        printf("VARIAVEL %s NAO DECLARADA, linha %d, coluna %d\n\n", $1, line, word_position);
        semanticErrors += 1;
        $$ = create_node_empty();
      }
    }
  | WRITE PARENL expression PARENR SEMIC {
      $$ = create_node2("WRITE PARENL expression PARENR SEMIC", create_node0($1), $3);
      write_func($3 -> saved);
      $$ -> saved = $3 -> saved;
    }
  | WRITELN PARENL expression PARENR SEMIC {
      $$ = create_node2("WRITELN PARENL expression PARENR SEMIC", create_node0($1), $3);
      writeln_func($3 -> saved);
      $$ -> saved = $3 -> saved;
    }
  ;

expression:
    many_operations {
      $$ = create_node1("many_operations", $1);
      $$ -> type = $1 -> type;
      $$ -> saved = $1 -> saved;
      if ($1 -> type == 'u') {
        printf("ERRO SEMATICO\n");
        printf("ERRO DE TIPOS ENCONTRADO, linha %d, coluna %d\n\n", line, word_position);
        semanticErrors += 1;
      }
    }
  | func_call {
      $$ = create_node1("func_call", $1);
      $$ -> type = $1 -> type;
    }
  | assign_value {
      $$ = create_node1("assign_value", $1);
      $$ -> type = $1 -> type;
      $$ -> saved = $1 -> saved;
    }
  ;

term:
    math_term {
      $$ = create_node1("math_term", $1);
      $$ -> type = $1 -> type;
      $$ -> saved = $1 -> saved;
    }
  | str_term {
      $$ = create_node1("str_term", $1);
      $$ -> type = $1 -> type;
      $$ -> saved = $1 -> saved;
    }
  ;

math_term:
    ID {
      struct symbol *s = check_is_in_scope($1, STACK_TOP(stack_scope) -> value);
      if (s != NULL) {
        $$ = create_node1("ID", create_node0_string($1));
        $$ -> type = s -> returnFuncVarType[0];
        $$ -> saved = utstring_body(s -> var_reg);
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
      UT_string *s = int_as_str($1);
      $$ -> saved = utstring_body(s);
    }
  | DECIMAL {
      $$ = create_node1("DECIMAL", create_node0_dec($1, 'f'));
      $$ -> type = 'f';
      UT_string *s = float_as_str($1);
      $$ -> saved = utstring_body(s);
  }
  | PARENL expression PARENR {
      $$ = create_node1("PARENL expression PARENR", $2);
      $$ -> type = $2 -> type;
      $$ -> saved = $2 -> saved;
    }
  ;

str_term:
    CHAR {
      $$ = create_node1("CHAR", create_node0_char($1, 'c'));
      $$ -> type = 'c';
      $$ -> saved = $1;
    }
  | STRING {
      $$ = create_node1("STRING", create_node0($1));
      $$ -> type = 't';
      $$ -> saved = $1;
    }
  | EMPTY {
      $$ = create_node1("EMPTY", create_node0($1));
      $$ -> type = 's';
      $$ -> saved = $1;
    }
  ;

math_op:
    math_op ADD math_op_muldiv {
      $$ = create_node3("math_op ADD math_op_muldiv", $1, create_node0("+"), $3);
      $$ -> type = check_types($1 -> type, $3 -> type);
      UT_string *s = create_new_reg(var_reg);
      math_op_file("add", utstring_body(s), $1 -> saved, $3 -> saved);
      $$ -> saved = utstring_body(s);
    }
  | math_op SUB math_op_muldiv {
      $$ = create_node3("math_op SUB math_op_muldiv", $1, create_node0("-"), $3);
      $$ -> type = check_types($1 -> type, $3 -> type);
      UT_string *s = create_new_reg(var_reg);
      math_op_file("sub", utstring_body(s), $1 -> saved, $3 -> saved);
      $$ -> saved = utstring_body(s);
    }
  | math_op_muldiv {
      $$ = create_node1("math_op_muldiv", $1);
      $$ -> type = $1 -> type;
      $$ -> saved = $1 -> saved;
    }
  ;

math_op_muldiv:
    math_op_muldiv DIV math_term {
      $$ = create_node3("math_op_muldiv DIV term", $1, create_node0("/"), $3);
      $$ -> type = check_types($1 -> type, $3 -> type);
      UT_string *s = create_new_reg(var_reg);
      math_op_file("div", utstring_body(s), $1 -> saved, $3 -> saved);
      $$ -> saved = utstring_body(s);
    }
  | math_op_muldiv MULT math_term {
      $$ = create_node3("math_op_muldiv MULT term", $1, create_node0("*"), $3);
      $$ -> type = check_types($1 -> type, $3 -> type);
      UT_string *s = create_new_reg(var_reg);
      math_op_file("mul", utstring_body(s), $1 -> saved, $3 -> saved);
      $$ -> saved = utstring_body(s);
    }
  | math_term {
      $$ = create_node1("math_term", $1);
      $$ -> type = $1 -> type;
      $$ -> saved = $1 -> saved;
    }
  ;

many_operations:
    ADDSET PARENL many_operations PARENR {
      $$ = create_node2("ADDSET PARENL many_operations PARENR", create_node0($1), $3);
      $$ -> type = $3 -> type;
    }
  | REMOVE PARENL many_operations PARENR {
      $$ = create_node2("REMOVE PARENL many_operations PARENR", create_node0($1), $3);
      $$ -> type = $3 -> type;
    }
  | EXISTS PARENL many_operations PARENR {
      $$ = create_node2("EXISTS PARENL many_operations PARENR", create_node0($1), $3);
      $$ -> type = $3 -> type;
    }
  | operation {
      $$ = create_node1("operation", $1);
      $$ -> type = $1 -> type;
      $$ -> saved = $1 -> saved;
    }
  ;

operation:
    in_set {
      $$ = create_node1("in_set", $1);
      $$ -> type = $1 -> type;
    }
  | ISTYPE PARENL expression PARENR {
      $$ = create_node2("ISTYPE PARENL expression PARENR", create_node0($1), $3);
    }
  | or_operation {
      $$ -> type = $1 -> type;
      $$ -> saved = $1 -> saved;
    }
  ;

or_operation:
    or_operation OR and_operation {
      $$ = create_node3("term OR expression", $1, create_node0("||"), $3);
      $$ -> type = $1 -> type;
      char *s = utstring_body(create_new_reg(var_reg));
      math_op_file("or", s, $1 -> saved, $3 -> saved);
      $$ -> saved = s;
      var_reg++;
    }
  | and_operation {
      $$ = create_node1("and_operation", $1);
      $$ -> type = $1 -> type;
      $$ -> saved = $1 -> saved;
    }
  ;

and_operation:
    and_operation AND equality_operation {
      $$ = create_node3("term AND expression", $1, create_node0("&&"), $3);
      $$ -> type = $1 -> type;
      char *s = utstring_body(create_new_reg(var_reg));
      math_op_file("and", s, $1 -> saved, $3 -> saved);
      $$ -> saved = s;
      var_reg++;
    }
  | equality_operation {
      $$ = create_node1("equality_operation", $1);
      $$ -> type = $1 -> type;
      $$ -> saved = $1 -> saved;
    }
  ;

equality_operation:
    equality_operation EQUALS relational_operation {
      $$ = create_node3("term EQUALS expression", $1, create_node0("=="), $3);
      $$ -> type = $1 -> type;
      char *s = utstring_body(create_new_reg(var_reg));
      math_op_file("seq", s, $1 -> saved, $3 -> saved);
      $$ -> saved = s;
      var_reg++;
    }
  | equality_operation DIFFERENT relational_operation {
      $$ = create_node3("term DIFFERENT expression", $1, create_node0("!="), $3);
      char *s = utstring_body(create_new_reg(var_reg));
      math_op_file("seq", s, $1 -> saved, $3 -> saved);
      not_func(s, s);
      $$ -> saved = s;
      $$ -> type = $1 -> type;
    }
  | relational_operation {
      $$ = create_node1("relational_operation", $1);
      $$ -> type = $1 -> type;
      $$ -> saved = $1 -> saved;
    }
  ;

relational_operation:
    relational_operation SMALLER negation_operation {
      $$ = create_node3("term SMALLER expression", $1, create_node0("<"), $3);
      $$ -> type = $1 -> type;
      char *s = utstring_body(create_new_reg(var_reg));
      math_op_file("slt", s, $1 -> saved, $3 -> saved);
      $$ -> saved = s;
      var_reg++;
    }
  | relational_operation GREATER negation_operation {
      $$ = create_node3("term GREATER expression", $1, create_node0(">"), $3);
      $$ -> type = $1 -> type;
      char *s = utstring_body(create_new_reg(var_reg));
      math_op_file("slt", s, $3 -> saved, $1 -> saved);
      $$ -> saved = s;
      var_reg++;
    }
  | relational_operation SMALLEQ negation_operation {
      $$ = create_node3("term SMALLEQ expression", $1, create_node0("<="), $3);
      $$ -> type = $1 -> type;
      char *s = utstring_body(create_new_reg(var_reg));
      math_op_file("sleq", s, $1 -> saved, $3 -> saved);
      $$ -> saved = s;
      var_reg++;
    }
  | relational_operation GREATEQ negation_operation {
      $$ = create_node3("term GREATEQ expression", $1, create_node0(">="), $3);
      $$ -> type = $1 -> type;
      char *s = utstring_body(create_new_reg(var_reg));
      math_op_file("sleq", s, $3 -> saved, $1 -> saved);
      $$ -> saved = s;
      var_reg++;
    }
  | negation_operation {
      $$ = create_node1("negation_operation", $1);
      $$ -> type = $1 -> type;
      $$ -> saved = $1 -> saved;
    }
  ;

negation_operation:
    NEG math_op {
      $$ = create_node2("NEG math_op", create_node0("!"), $2);
      $$ -> type = $2 -> type;
      not_func($2 -> saved, $2 -> saved);
      $$ -> saved = $2 -> saved;
    }
  | math_op {
      $$ = create_node1("math_op", $1);
      $$ -> type = $1 -> type;
      $$ -> saved = $1 -> saved;
    }
  ;

func_call:
    ID PARENL args_list PARENR {
      if (find_symbol_func($1) != NULL){
        if (check_number_of_params(args_params, $1)){
          args_params = 0;
          $$ = create_node2("ID PARENL args_list PARENR", create_node0($1), $3);
          $$ -> type = find_symbol_func($1) -> returnFuncVarType[0];
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
  | str_term {
      $$ = create_node1("str_term", $1);
      $$ -> type = $1 -> type;
    }
  ;

in_set:
    term IN expression {
      $$ = create_node3("term IN expression", $1, create_node0($2), $3);
      $$ -> type = check_types_set($3 -> type);
    }
  ;

args_list:
    args_list COMMA expression {
      args_params++;
      $$ = create_node2("args_list COMMA term", $1, $3);
    }
  | expression {
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
        var_dec_assign(utstring_body(s -> var_reg), $3 -> saved);
        $$ -> saved = $3 -> saved;
        if (s -> returnFuncVarType[0] != 'e')
          $$ -> type = s -> returnFuncVarType[0];
        else
          $$ -> type = $3 -> type;
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

  char s[100] = "";
  char *file = argv[1];

  strcat(s, file);
  strcat(s, ".tac");

  ast_tree = NULL;

  yyin = fopen(file, "r");

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

  if(errors == 0) {
    tacfile = fopen(s, "w");
    fprintf (tacfile, ".table\n");
    fprintf (tacfile, ".code\n");
    write_tac_file(current_line);
    fclose(tacfile);
  }

  if (errors == 0 && semanticErrors == 0) {
    printf("\n\n#### INICIO DA ÁRVORE SINTÁTICA ####\n\n");
    print_tree(ast_tree);
    printf("\n\n#### FIM DA ÁRVORE SINTÁTICA ####\n\n");
    if (semanticErrors > 0) {
      printf("\n\nFORAM ENCONTRADAS %d AVISOS NO CODIGO\n\n", semanticErrors);
    }
  } else {
    printf("\n\nFORAM ENCONTRADOS %d ERROS E %d AVISOS NO CODIGO\n\n", errors, semanticErrors);
    free_tree(ast_tree);
  }

  free_symbol_table();

  free_stack();

  free_codegen();

  fclose(yyin);

  yylex_destroy();

  return 0;
}

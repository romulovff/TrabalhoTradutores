#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "uthash.h"
#include "stackScope.h"

typedef struct symbol {
  char *name;
  char *symbolType;
  char *returnFuncVarType;
  int scope;
  int parameters;
  UT_hash_handle hh;
}Symbol;

Symbol *symbol_table = NULL;

int add_symbol(char *name, char *symbolType, char *returnFuncVarType, int scope, int parameters) {
  struct symbol *s;

  HASH_FIND_STR(symbol_table, name, s);
  if (s == NULL){
    s = (Symbol*)malloc(sizeof(Symbol));
    s -> name = name;
    s -> symbolType = symbolType;
    s -> returnFuncVarType = returnFuncVarType;
    s -> scope = scope;
    s -> parameters = parameters;
    HASH_ADD_STR(symbol_table, name, s);
    return 0;
  } else {
    if (s -> scope != scope) {
      s = (Symbol*)malloc(sizeof(Symbol));
      s -> name = name;
      s -> symbolType = symbolType;
      s -> returnFuncVarType = returnFuncVarType;
      s -> scope = scope;
      s -> parameters = parameters;
      HASH_ADD_STR(symbol_table, name, s);
      return 0;
    }else {
      printf("ERRO SEMANTICO\n");
      printf("VARIAVEL OU FUNÇAO JA DECLARADA NESSE ESCOPO\n\n");
      return 1;
    }
  }
  return 1;
}

struct symbol *find_symbol_func(char *name) {
  struct symbol *s;

  for (s = symbol_table; s != NULL; s = s -> hh.next){
    if (strcmp(s -> name, name) == 0 && strcmp(s -> symbolType, "func") == 0){
      return s;
    }
  }
  return NULL;
}

void print_symbols() {
    Symbol *s;

    printf("************************************************************************ TABELA DE SIMBOLOS **************************************************************************\n");
    printf("    Valor                        Tipo do símbolo             Tipo do retorno da função ou tipo da variável       Escopo           Parâmetros\n");
    for (s = symbol_table; s != NULL; s = s -> hh.next) {
        printf("    %-16s                 %-24s                   %-20s                %-3d                 %d\n", s -> name, s -> symbolType, s -> returnFuncVarType, s -> scope, s -> parameters);
    }
    printf("**********************************************************************************************************************************************************************\n");
}

void free_symbol_table() {
  Symbol *current_symbol, *tmp;

  HASH_ITER(hh, symbol_table, current_symbol, tmp) {
    HASH_DEL(symbol_table, current_symbol);
    free(current_symbol);
  }
}

bool check_number_of_params(int args_params, char* func_name) {
  struct symbol *s = find_symbol_func(func_name);

  if(s -> parameters == args_params)
    return true;
  return false;
}

struct symbol *check_is_in_scope(char *name, int num) {
  struct symbol *s;
  Scope *scope;
  Scope *scopeAux;

  for (scope = stack_scope; !STACK_EMPTY(scope);){
    for (s = symbol_table; s != NULL; s = s -> hh.next){
      if (strcmp(s -> name, name) == 0 && s -> scope == scope -> value && (strcmp(s -> symbolType, "var") == 0 || strcmp(s -> symbolType, "param") == 0)){
        return s;
      }
    }
    STACK_POP(scope, scopeAux);
  }
  return NULL;
  free(scopeAux);
}

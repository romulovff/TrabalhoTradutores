#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "uthash.h"

typedef struct symbol {
  char *name;
  char *symbolType;
  char *returnFuncVarType;
  int scope;
  UT_hash_handle hh;
}Symbol;

Symbol *symbol_table = NULL;

void add_symbol(char *name, char *symbolType, char *returnFuncVarType, int scope) {
  struct symbol *s;

  HASH_FIND_STR(symbol_table, name, s);
  if (s == NULL){
    s = (Symbol*)malloc(sizeof(Symbol));
    s -> name = name;
    s -> symbolType = symbolType;
    s -> returnFuncVarType = returnFuncVarType;
    s -> scope = scope;
    HASH_ADD_STR(symbol_table, name, s);
  } else {
    if (s -> scope != scope) {
      s = (Symbol*)malloc(sizeof(Symbol));
      s -> name = name;
      s -> symbolType = symbolType;
      s -> returnFuncVarType = returnFuncVarType;
      s -> scope = scope;
      HASH_ADD_STR(symbol_table, name, s);
    }else {
      printf("NÃO FOI POSSÍVEL ADICIONAR SIMBOLO\n");
    }
  }
}

struct symbol *find_symbol(char *name) {
    struct symbol *s;

    HASH_FIND_STR(symbol_table, name, s);  /* s: output pointer */
    return s;
}

void print_symbols() {
    Symbol *s;

    printf("************************************************* TABELA DE SIMBOLOS **************************************************\n");
    printf("    Valor                        Tipo do símbolo             Tipo do retorno da função ou tipo da variável       Escopo\n");
    for (s = symbol_table; s != NULL; s = s -> hh.next) {
        printf("    %-16s                 %-24s                   %-20s                %d\n", s -> name, s -> symbolType, s -> returnFuncVarType, s -> scope);
    }
    printf("***********************************************************************************************************************\n");
}

void free_symbol_table() {
  Symbol *current_symbol, *tmp;

  HASH_ITER(hh, symbol_table, current_symbol, tmp) {
    HASH_DEL(symbol_table, current_symbol); 
    free(current_symbol);
  }
}

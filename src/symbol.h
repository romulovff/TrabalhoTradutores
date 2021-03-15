#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "uthash.h"

typedef struct symbol {
  int id;
  char *name;
  char valueType;
  char symbolType;
  UT_hash_handle hh;
}Symbol;

Symbol *symbol_table = NULL;

void add_symbol(int id, char *name, char valueType, char symbolType) {
  struct symbol *s;

  HASH_FIND_INT(symbol_table, &id, s);
  if (s == NULL){
    s = (Symbol*)malloc(sizeof(Symbol));
    s -> id = id;
    s -> name = name;
    s -> valueType = valueType;
    s -> symbolType = symbolType;
    HASH_ADD_INT(symbol_table, id, s);
  } else {
    printf("NÃO FOI POSSÍVEL ADICIONAR SIMBOLO\n");
  }
}

void print_symbols() {
    Symbol *s;

    for (s = symbol_table; s != NULL; s = s -> hh.next) {
        printf("Symbol ID %d - Value: %s - Type: %c - Function Type: %c\n", s -> id, s -> name, s -> valueType, s -> symbolType);
    }
}
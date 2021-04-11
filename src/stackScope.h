#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utstack.h"

typedef struct scope {
    int value;
    struct scope *next;
} Scope;

Scope *stack_scope = NULL;

void push_stack(int value) {
  Scope *scope = (Scope*)malloc(sizeof(Scope));
  scope -> value = value;
  STACK_PUSH(stack_scope, scope);
}

void pop_stack() {
  Scope *scope;
  STACK_POP(stack_scope, scope);
  free(scope);
}
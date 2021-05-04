#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>
#include "utstring.h"
#include "utlist.h"

typedef struct codegen{
  UT_string *line;
  struct codegen *next;
  struct codegen *prev;
} Codegen;

FILE *tacfile;
Codegen *codegen = NULL;
Codegen *current_line = NULL;

void add_func(char *name) {
  Codegen *code = (Codegen *)malloc(sizeof *code);

  utstring_new(code -> line);
  utstring_printf(code -> line, "%s:\n", name);
  DL_PREPEND(current_line, code);
}

void var_dec(char *name, char *value){
  Codegen *code = (Codegen *)malloc(sizeof *code);
  utstring_new(code -> line);
  utstring_printf(code -> line, "mov %s, %s\n", name, value);
  DL_PREPEND(current_line, code);
}

void write_tac_file(Codegen *original_node) {
  if(original_node == NULL)
    return;

  fprintf(tacfile, "%s", utstring_body(original_node -> line));
  write_tac_file(original_node -> next);
}

// void add_inst(char *command, char *operand1, char *operand2, int last_register) {
//   UT_string *line;
//
//   utstring_new(line);
//   utstring_printf(line, "%s %s%d %s\n", command, operand1, last_register, operand2);
//   fprintf(tacfile, "%s", utstring_body(line));
//   free(line);
// }

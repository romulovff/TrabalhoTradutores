#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>
#include "utstring.h"
#include "utlist.h"

typedef struct codegen{
  UT_string *line;
  struct codegen *prev;
  struct codegen *next;
} Codegen;

FILE *tacfile;
Codegen *current_line = NULL;

void add_func(char *name) {
  Codegen *code = (Codegen *)malloc(sizeof *code);

  utstring_new(code -> line);
  utstring_printf(code -> line, "%s:\n", name);
  DL_APPEND(current_line, code);
}

void var_dec_assign(char *name, char *value){
  Codegen *code = (Codegen *)malloc(sizeof *code);
  utstring_new(code -> line);
  utstring_printf(code -> line, "mov %s, %s\n", name, value);
  DL_APPEND(current_line, code);
}

void write_func(char *value){
  Codegen *code = (Codegen *)malloc(sizeof *code);
  utstring_new(code -> line);
  utstring_printf(code -> line, "print %s\n", value);
  DL_APPEND(current_line, code);
}

void writeln_func(char *value){
  Codegen *code = (Codegen *)malloc(sizeof *code);
  utstring_new(code -> line);
  utstring_printf(code -> line, "println %s\n", value);
  DL_APPEND(current_line, code);
}

void math_op_file(char *op, char *dest, char *operand1, char *operand2) {
  Codegen *code = (Codegen *)malloc(sizeof *code);
  utstring_new(code -> line);
  utstring_printf(code -> line, "%s %s, %s, %s\n", op, dest, operand1, operand2);
  DL_APPEND(current_line, code);
}

void write_tac_file(Codegen *original_node) {
  if(original_node == NULL)
    return;

  fprintf(tacfile, "%s", utstring_body(original_node -> line));
  write_tac_file(original_node -> next);
}

UT_string *create_new_reg(int var_reg) {
  UT_string *r;
  utstring_new(r);
  utstring_printf(r, "$%d", var_reg);

  return r;
}

UT_string *int_as_str(int value) {
  UT_string *r;
  utstring_new(r);
  utstring_printf(r, "%d", value);

  return r;
}

UT_string *float_as_str(float value) {
  UT_string *r;
  utstring_new(r);
  utstring_printf(r, "%f", value);

  return r;
}

// void add_inst(char *command, char *operand1, char *operand2, int last_register) {
//   UT_string *line;
//
//   utstring_new(line);
//   utstring_printf(line, "%s %s%d %s\n", command, operand1, last_register, operand2);
//   fprintf(tacfile, "%s", utstring_body(line));
//   free(line);
// }

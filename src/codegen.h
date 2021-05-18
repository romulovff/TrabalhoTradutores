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

void read_func(char *value, char type) {
  Codegen *code = (Codegen *)malloc(sizeof *code);
  utstring_new(code -> line);
  if (type == 'i')
    utstring_printf(code -> line, "scani %s\n", value);
  if (type == 'f')
    utstring_printf(code -> line, "scanf %s\n", value);
  if (type == 'c')
    utstring_printf(code -> line, "scanc %s\n", value);
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

void not_func(char *name, char *value){
  Codegen *code = (Codegen *)malloc(sizeof *code);
  utstring_new(code -> line);
  utstring_printf(code -> line, "not %s, %s\n", name, value);
  DL_APPEND(current_line, code);
}

// void return_func(char *value) {
//   Codegen *code = (Codegen *)malloc(sizeof *code);
//   utstring_new(code -> line);
//   utstring_printf(code -> line, "return %s\n", value);
//   DL_APPEND(current_line, code);
// }

void if_func(int value, char *reg){
  Codegen *code = (Codegen *)malloc(sizeof *code);
  utstring_new(code -> line);
  utstring_printf(code -> line, "brz if_exit_%d, %s\n", value, reg);
  DL_APPEND(current_line, code);
}

void if_func_exit(int value){
  Codegen *code = (Codegen *)malloc(sizeof *code);
  utstring_new(code -> line);
  utstring_printf(code -> line, "if_exit_%d:\n", value);
  DL_APPEND(current_line, code);
}

void if_jump(int value){
  Codegen *code = (Codegen *)malloc(sizeof *code);
  utstring_new(code -> line);
  utstring_printf(code -> line, "jump if_jump_%d\n", value);
  DL_APPEND(current_line, code);
  if_func_exit(value);
}

void if_jump_exit(int value){
  Codegen *code = (Codegen *)malloc(sizeof *code);
  utstring_new(code -> line);
  utstring_printf(code -> line, "if_jump_%d:\n", value);
  DL_APPEND(current_line, code);
}

void write_tac_file(Codegen *original_node) {
  if(original_node == NULL)
    return;

  fprintf(tacfile, "%s", utstring_body(original_node -> line));
  write_tac_file(original_node -> next);
}

UT_string *create_new_reg_from_string(char *var_reg) {
  UT_string *r;
  utstring_new(r);
  utstring_printf(r, "%s", var_reg);

  return r;
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

void free_codegen() {
  Codegen *temp, *line;

  DL_FOREACH_SAFE(current_line,line,temp) {
    DL_DELETE(current_line,line);
    free(line);
  }
}

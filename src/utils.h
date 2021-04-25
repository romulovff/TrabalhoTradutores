#include<stdio.h>
#include<stdlib.h>

char check_types(char type1, char type2) {
  if (type1 == type2)
    return type1;
  if (type1 == 'i' && type2 == 'f')
    return 'f';
  if (type1 == 'f' && type2 == 'i')
    return 'f';
  return 'n';
}

bool check_types_var(char varType, char value) {
  if (varType == value)
    return true;
  return false;
}

int check_types_return_function(char value, char returnType) {
  if (returnType == 'v' && value != 'x')
    return 0;
  if (returnType != 'v' && value == 'x')
    return 1;
  if (returnType == value)
    return 2;
  return 3;
}

%{
  #include <stdio.h>
  #include <string.h>
  #include <math.h>

  int line = 1;
  int word_position = 1;
%}

newline   [;]?"\n"
space     " "
tab       "\t"

letter    [a-zA-Z]
digit     [0-9]
empty     "EMPTY"
id        {letter}+({letter}|{digit}|_|-)*
integer   {digit}+
decimal   {digit}+"."{digit}+
elem      {integer}|{decimal}
set       "{"({elem}","?)*"}"
type      "int"|"float"|"set"|"elem"

add       [+]
sub       [-]
mult      [*]
div       [/]

stfunc    [{]
endfunc   [}]

negate    [!]
or        [|][|]
and       [&][&]

smaller   [<]
smaleq    [<][=]
greater   [>]
greateq   [>][=]
equals    [=][=]
diff      [!][=]
assign    [=]

inexp     {id}

addfunc   "add("{elem}" in "{id}")"

params    {type}" "{id}+

if        "if"
else      "else"
funcdec   {type}" "{id}+"("{params}?")"
funccal   {id}"("{id}?")"

%%

{tab}     {
            word_position += 2;
          }

{space}   {
            word_position += 1;
          }

{newline} {
            line += 1;
            word_position = 1;
          }

{funcdec} {
            printf("You just typed a function declaration '%s' on line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{funccal} {
            printf("You just called a function '%s' on line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{stfunc}  {
            printf("You just started a function '%s' on line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{addfunc} {
            printf("You just added to a set '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{endfunc} {
            printf("You just ended a function '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{assign}  {
            printf("You are assigning a value '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{empty}   {
            printf("You are using a constant '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{add}     {printf("You are adding values\n");}

{if}      {printf("You just typed a if\n");}

{else}    {printf("You just typed an else\n");}

{digit}   {printf("You just typed a digit\n");}

{params}  {
            printf("You just typed a parameter '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{and}     {printf("You just typed an and operator\n");}

{diff}    {printf("You just typed a != operator\n");}

{set}     {printf("You just typed a set");}

{id}      {
            printf("You just typed an id '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

.         {
            printf("\nERROR!!\n");
            printf("Word %s at line %d column %d\n\n", yytext, line, word_position);
            word_position += strlen(yytext);
          }

%%

int main() {
  FILE *file;

  yyin = fopen("test.txt", "r");
  yylex();

  return 0;
}

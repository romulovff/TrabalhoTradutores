%{
  #include <stdio.h>
  #include <string.h>
  #include <math.h>

  int line = 1;
  int word_position = 1;
%}

newline   "\n"
space     " "
tab       "\t"

letter    [a-zA-Z]
digit     [0-9]
empty     "EMPTY"
id        {letter}+({letter}|{digit}|_|-)*
integer   {digit}+
decimal   {digit}*[.]{digit}+
elem      {integer}|{decimal}
set       "{"({elem}","?)*"}"
char      '{letter}'
string    \"(\\.|[^"\\])*\"
type      "int"|"float"|"set"|"elem"
comment   "/*"((\*+[^/*])|([^*]))*\**"*/"

add       [+]
sub       [-]
mult      [*]
div       [/]

stfunc    [{]
endfunc   [}]
parenl    [(]
parenr    [)]
semic     [;]

negate    [!]
or        "||"
and       "&&"

smaller   [<]
greater   [>]
assign    [=]
smalleq    "<="
greateq   ">="
equals    "=="
diff      "!="

if        "if"
else      "else"
for       "for"
return    "return"

read      "read"
write     "write"
writeln   "writeln"

%%

{semic}   {
            printf("'%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{add}     {
            printf("'%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{sub}     {
            printf("'%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{mult}    {
            printf("'%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{div}     {
            printf("'%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{negate}  {
            printf("'%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

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

{type}    {
            printf("Type: '%s' on line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{stfunc}  {
            printf("'%s' on line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{endfunc} {
            printf("'%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{parenl}  {
            printf("'%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{parenr}  {
            printf("'%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{empty}   {
            printf("Constant: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{assign}  {
            printf("'%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{comment} {
            word_position += yyleng;
          }

{and}     {
            printf("OP: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{or}      {
            printf("OP: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{smaller} {
            printf("OP: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{greater} {
            printf("OP: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{smalleq} {
            printf("OP: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{greateq} {
            printf("OP: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{equals}  {
            printf("OP: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{diff}    {
            printf("OP: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{if}      {
            printf("Keyword '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{else}    {
            printf("Keyword '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{for}     {
            printf("Keyword '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{return}  {
            printf("Keyword '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{decimal} {
            printf("Decimal: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{integer}  {
            printf("Integer: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{id}      {
            printf("Id: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{char}    {
            printf("Char: '%s' on line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{string}  {
            printf("String: '%s' on line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

.         {
            printf("\nERROR!!\n");
            printf("%s at line %d column %d\n\n", yytext, line, word_position);
            word_position += strlen(yytext);
          }

%%

int main(int argc, char *argv[]) {
  printf("\n\n#### TESTE DO ARQUIVO %s ####\n\n", argv[1]);

  FILE *file;

  yyin = fopen(argv[1], "r");
  yylex();

  printf("\n\n#### FIM DO ARQUIVO %s ####\n\n", argv[1]);

  return 0;
}

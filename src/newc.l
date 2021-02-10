%{
  #include <stdio.h>
  #include <string.h>
  #include <math.h>

  int line = 1;
  int word_position = 1;
%}

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

params    {type}" "{id}+

if        "if"
else      "else"
func      {id}+"("{params}?")"

%%

{add}     {printf("You just typed a plus sign\n");}
{if}      {printf("You just typed a if\n");}
{else}    {printf("You just typed an else\n");}
{digit}   {printf("You just typed a digit\n");}
{func}    {printf("You just typed a function declaration\n");}
{params}  {printf("You just typed a parameter\n");}
{and}     {printf("You just typed an and operator\n");}
{diff}    {printf("You just typed a != operator\n");}
{set}     {printf("You just typed a set");}

%%

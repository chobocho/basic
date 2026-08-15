/*--%{

%}--*/
/*--
digit [0-9]+
*--/
/*--%%
{digit} { printf("%s\n", yytext);
%%--*/

int main(int argc, char **argv) {
    yylex();
    printf("Hi!");
}
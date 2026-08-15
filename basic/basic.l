%{

%}

digit [0-9]+

%%
quit    { exit(0); }
{digit} { printf("%s\n", yytext); }
.       ;
%%

int main(int argc, char **argv) {
    yylex();
    return 0;
}

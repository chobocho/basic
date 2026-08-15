CC = gcc
LIBS = -lfl
LEX = flex
YACC = yacc

all: basic 

basic: lex.yy.c
	$(CC) -o basic lex.yy.c $(LIBS)

lex.yy.c: basic.l
	$(LEX) basic.l

clean:
	rm lex.yy.c
	rm basic 

all:
	flex lexico.l
	bison -d sintatico.y
	clang sintatico.tab.c lex.yy.c -o cmp

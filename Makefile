all:
	flex lexico.l
	bison -d sintatico.y
	clang sintatico.tab.c lex.yy.c -o cmp
	
	./cmp < programa_1.txt

	./cmp < programa_2.txt

	./cmp < programa_3.txt

	./cmp < programa_4.txt

	./cmp < programa_5.txt

	./cmp < programa_6.txt
main:
	bison -d parser.y  
	flex lexar.l  
	gcc -o a.out parser.tab.c lex.yy.c  
	rm lex.yy.c parser.tab.c
	#./a.out <full_example.c> output.txt

main2:
	gcc main.c
	./a.out
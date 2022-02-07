declaration.o: declaration.c declaration.h
	gcc -Wall -g -c declaration.c -o declaration.o


run_declaration: run_declaration.c declaration.o
	gcc -Wall -g run_declaration.c declaration.o -o run_declaration
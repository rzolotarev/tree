CC = gcc
CFLAGS = -g -Wall
declaration.o: declaration.c declaration.h
	$(CC) $(CFLAGS) -c declaration.c -o declaration.o


run_declaration: run_declaration.c declaration.o
	$(CC) $(CFLAGS) run_declaration.c declaration.o -o run_declaration
CC = gcc
CFLAGS = -g -Wall
declaration.o: declaration.c declaration.h
	$(CC) $(CFLAGS) -c $< -o $@

pointer.o: pointer.c pointer.h
	$(CC) $(CFFLAGS) -c $< -o $@

run_declaration: run_declaration.c declaration.o pointer.o
	$(CC) $(CFLAGS) $^ -o $@

run: run_declaration
	.\run_declaration.exe

clean:
	del *.o run_declaration.exe
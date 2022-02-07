CC = gcc
CFLAGS = -g -Wall
%.o: %.c %.h
	$(CC) $(CFLAGS) -c $< -o $@


run_declaration: run_declaration.c declaration.o
	$(CC) $(CFLAGS) $^ -o $@
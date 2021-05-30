CFLAGS = -g -pedantic-errors -ansi -Wall


program: main.o
	gcc -g -o program main.o functions.c

main.o : main.c
	gcc -c $(CFLAGS) main.c

clean:
	rm program *.o

CFLAGS = -g -pedantic-errors -ansi -Wall


program: main.o
	gcc -g -o program main.o functions.cpp

main.o : main.cpp
	gcc -c $(CFLAGS) main.cpp

clean:
	rm program *.o

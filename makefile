#makefile TR3_511226

all: prog

prog: TR3_511226.o
	gcc -o prog TR3_511226.o

TR3_511226.o: TR3_511226.c
	gcc -o TR3_511226.o TR3_511226.c -c -W -Wall -pendantic

clean:
	rm -rf *.o *~ prog



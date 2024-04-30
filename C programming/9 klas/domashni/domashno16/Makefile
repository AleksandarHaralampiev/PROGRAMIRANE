all: tests.out

linkedlist.o: linkedlist.h linkedlist.c
	gcc -c linkedlist.c -o linkedlist.o

tests.out: linkedlist.o tests.c
	gcc tests.c linkedlist.o -o tests.out

clean:
	rm -f *.o *.out
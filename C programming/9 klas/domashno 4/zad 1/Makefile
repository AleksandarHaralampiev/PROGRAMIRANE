all: help.exe mystring.o

mystring.o: mystring.c mystring.h
	gcc -c mystring.c -o mystring.o

help.exe:
	gcc main.c -o help.exe

clean:
	del -f *.exe *.o
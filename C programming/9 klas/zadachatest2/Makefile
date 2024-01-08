all: max.exe sum.exe helpers.o

helpers.o: helpers.c helpers.h
	gcc helpers.c - o helpers.o

max.exe: helpers.h helpers.c
	gcc max.c helpers.o -o max.exe

sum.exe: helpers.h helpers.c
	gcc sum.c helpers.o -o sum.exe

clean:
	rm -f *.o *.exe
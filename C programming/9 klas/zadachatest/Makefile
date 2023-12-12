all: square.exe powerof.exe

maths.o: maths.c maths.h
	gcc -c maths.c

square.exe: square.c maths.o
	gcc square.c maths.o -o square.exe 

powerof.exe: powerof.c maths.o
	gcc powerof.c maths.o -o powerof.exe

clean:
	del *.o square.exe powerof.exe
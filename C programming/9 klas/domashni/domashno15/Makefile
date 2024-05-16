all: donor.exe

dynarr.o: dynarr.h dynarr.c
	gcc -c dynarr.c -o dynarr.o

donor.exe: dynarr.o donor.c
	gcc donor.c dynarr.o -o donor.exe

clean:
	del *.o *.exe
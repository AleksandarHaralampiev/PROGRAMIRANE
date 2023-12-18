all: help.exe strlength.exe strconcat.exe strcompare.exe

help.exe: help.c
    gcc -o help.exe help.c

mystrings.o: mystrings.c mystrings.h
    gcc -c mystrings.c

strlength.exe: strlength.c mystrings.o
    gcc strlength.c mystrings.o -o strlength.exe 

strconcat.exe: strconcat.c mystrings.o
    gcc strconcat.c mystrings.o -o strconcat.exe

strcompare.exe: strcompare.c mystrings.o
    gcc strcompare.c mystrings.o -o strcompare.exe

clean:
    del *.o *.exe
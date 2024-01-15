all: longlong.exe smartcar.exe counter.o main.exe


longlong.exe: longlong.c
	gcc longlong.c -o longlong.exe


smartcar.exe: smartcar.c
	gcc smartcar.c -o smartcar.exe


main.exe: counter.o
	gcc main.c counter.o -o main.exe

counter.o:
	gcc -c counter.c -o counter.o


clean:
	del *.exe *.o
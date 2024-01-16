all: robot.out main.out

robot.out: robot.c
    gcc -o robot.out robot.c

main.out: main.c sum.c sum.h
    gcc -o main.out main.c sum.c
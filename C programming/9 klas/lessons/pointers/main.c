//how does memory work

#include <stdio.h>


int main() {
    /*int a = 10;
    printf("a = %d\n", a);
     int *p = &a;
     printf("%p\n", p);
        printf("%d\n", *p);
    int x1 = 10;
    int x2 = 20;

    int *p1 = &x1;
    int *p2 = p1;

    printf("x1 = %d\n", x1);
    printf("x2 = %d\n", x2);
    printf("p1 = %d\n", *p1);
    printf("p2 = %d\n", *p2);

    *p1 = 15;
    printf("x1 = %d\n", x1);
    printf("x2 = %d\n", x2);
    printf("p1 = %d\n", *p1);
    printf("p2 = %d\n", *p2);

    p1 = &x2;
    printf("x1 = %d\n", x1);
    printf("x2 = %d\n", x2);
    printf("p1 = %d\n", *p1);
    printf("p2 = %d\n", *p2);*/

    const int a = 10;
    int b = 20;
    //a = 20; - error

    const int *p = &a;
    p = &b;
    //*p = 30; - error
    int *p2 = &a;
    *p2 = 30;
    printf("%d\n", a);


    int * const p3 = &b;
    *p3 = 30;//ok
    //p3 = &a; - error



}
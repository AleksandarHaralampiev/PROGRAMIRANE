#include <stdio.h>


void foo(int a) {
    a = 20;
}

void foo2(int *a) {
    *a = 20;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void){
    int x = 10;
    foo(x);
    printf("%d\n", x);

    int x1 = 10;
    foo2(&x1);
    printf("%d\n", x1);

    int a = 7;
    int b = 5;
    swap(&a, &b);
    printf("a = %d, b = %d\n", a, b);
}
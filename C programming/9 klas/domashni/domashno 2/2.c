#include <stdio.h>

#define MAX(x, y) ((x > y) ? x : y)

int main() {
    int a = 5;
    int b = 10;
    int result = MAX(a, b);
    printf("По-големият от %d и %d е: %d\n", a, b, result);
    return 0;
}
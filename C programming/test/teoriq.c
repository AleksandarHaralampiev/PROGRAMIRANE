#include <stdio.h>

int foo(int a)
{
    static int b = 1;//static int - global variable with local scope - it is initialized only once and keeps its value between function calls
    b++;
    return a + b;
}

int main(void){
    int sum = 0;
    for(int i = 1; i <= 3; i++){
        sum += foo(i);
    }
    printf("%d\n", sum);
    return 0;
}
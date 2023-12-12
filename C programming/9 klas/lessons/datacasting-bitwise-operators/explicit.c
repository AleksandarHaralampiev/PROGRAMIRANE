#include <stdio.h>

int main(){
    short a = 125;
    int b = (int)a;
    printf("b = %d\n", b);

    int c1 = 10;
    int c2 = 3;
    float c3 = (float)c1/c2;
    printf("c3 = %f\n", c3);
    return 0;
    
}
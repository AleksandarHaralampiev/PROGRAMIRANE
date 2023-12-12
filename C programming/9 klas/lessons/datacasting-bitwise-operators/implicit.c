//datacasting in c - type casting
//bytewise operators
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

long double square(long double x)
{
    return x*x;
}


int main( ){
    short int a = SHRT_MAX;
    printf("a = %d\n", a);
    int b = a;
    printf("b = %d\n", b);
    int a1 = INT_MAX;
    printf("a1 = %d\n", a1);
    short int b1 = a1;
    printf("b1 = %d\n", b1);
    //char-->short int-->int-->long int-->long long int-->float-->double-->long double - no data loss
    //typecasting from a bigger data type to a smaller data type - unsafe operation - data loss
    //long double-->double-->float-->long long int-->long int-->int-->short int-->char - data loss
    char a2 = 124;
    unsigned char b2 = a2;
    printf("b2 = %d\n", b2);

    char a3 = -124;
    unsigned char b3 = a3;
    printf("b3 = %d\n", b3);

    int a4 = 124;
    float b4 = a4;
    printf("b4 = %f\n", b4);

    float a5 = 124.5;
    int b5 = a5;
    printf("b5 = %d\n", b5);//data loss of the decimal part

    int d1 = 10;
    float d2 = 3;
    float d3 = d1/d2;
    printf("d3 = %f\n", d3);//data loss of the decimal part

    long double x1 = square(d1);
    printf("x1 = %Lf\n", x1);
    long double x2 = square(d2);
    printf("x2 = %Lf\n", x2);
}

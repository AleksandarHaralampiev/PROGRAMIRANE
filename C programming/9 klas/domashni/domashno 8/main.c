#include <stdio.h>


int main(void){
    double a,b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    double *p1 = &a;
    double *p2 = &b;
    printf("the adress of a is %p\n", p1);
    printf("the adress of b is %p\n", p2);
    printf("the value of a is %lf\n", *p1);
    printf("the value of b is %lf\n", *p2);



}
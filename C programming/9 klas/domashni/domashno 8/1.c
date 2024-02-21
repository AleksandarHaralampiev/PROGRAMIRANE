#include <stdio.h>


int main(void){
    double a,b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    double *p1 = &a;
    double *p2 = &b;
    printf("adresa na a: %p\n", p1);
    printf("adresa na b: %p\n", p2);
    printf("stoinostta na a: %lf\n", *p1);
    printf("stoinostta na b: %lf\n", *p2);
}
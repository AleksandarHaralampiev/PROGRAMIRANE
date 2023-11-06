//22. ax+b>0
#include<stdio.h>
#include <stdlib.h>

int main()
{
float a, b, x;
printf("\na = ");
scanf("%d",&a);
printf("\nb = ");
scanf("%d",&b);
    if (a==0)
    {
        if (b>0)
        {
            printf("всяко x е решение");
        }
        else
        {
            printf("няма решение за x");
        }
    }
    else
    {
        if (a>0)
        {
            printf("\nx > -b/a\n");
            printf("x > %f" ,-b/a);
        }
        else
        {
            printf("\nx < -b/a\n");
            printf("x < %f" ,-b/a);
        }
    }
}
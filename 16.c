//16.Да се определи броят на единиците в двоичното представяне на дадено естествено число.

#include <stdio.h>

void main()
{
    int n,i;
    do {
        printf("\nn = ");
        scanf("%d", &n);
    }while(n<1);
    i=0;
    while(n>0)
    {
        if(n%2==1)
        i++;
        n=n/2;
    }
    printf("%d",i);
}
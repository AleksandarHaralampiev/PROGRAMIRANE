//4.Да се намери сумата на n произволни числа.

#include <stdio.h>

int n,a,i,sum;
int main()
{
    do {
        printf("\nn=");
        scanf("%d", &n);
    }while(n<1);

    sum=0;
    i=1;
    while(i<=n)
    {
        printf("a=");
        scanf("%d",&a);
        sum=sum+a;
        i++;

    }
    printf("%d",sum);
}
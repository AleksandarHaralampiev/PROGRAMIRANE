//3.Да се намери сумата на естествените числа от 1 до n.

#include <stdio.h>

int i,n,sum;
int main()
{
    do {
        printf("\nn=");
        scanf("%d", &n);
    }while(n<1);
    
    i=1;
    sum=0;
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    printf("%d",sum);
}
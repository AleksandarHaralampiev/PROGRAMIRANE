//6.Да се намери сумата на n числа, но само тези, които се делят на 3.

#include <stdio.h>

int n,a,i,sum;
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
        printf("a=");
        scanf("%d",&a);
        if(a%3==0)
            {
                sum=sum+a;
            }

        i++;
    }
     printf("%d",sum);
}
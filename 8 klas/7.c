//7.Сумата на числата от m до n

#include <stdio.h>

int n,m,sum;
int main()
{
    do {
        printf("\nm = ");
        scanf("%d", &m);
        printf("\nn = ");
        scanf("%d", &n);
    }while(m>n);
sum = 0;
while (m<=n)
{
sum = sum +m;
m = m+1;
}
printf("\nsum = %d" ,sum);
}
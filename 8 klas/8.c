//8.Сумата на четните числата от m до n

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
if(m%2!=0)
{
    m = m + 1;
}
while (m<=n)
{
sum = sum +m;
m = m+2;
}
printf("\nsum = %d" ,sum);
}
//сумата на n на брой числа но само които са четни и когато въведеш 0 спираш да въвеждаш
#include<stdio.h>
#include <stdlib.h>

int main()
{
int n, i, a, S = 0;
    do {
        printf("\nn = ");
        scanf("%d", &n);
    }while(n<1);
    i=1;
    while(i<=n)  
    {
        printf("number = ");
        scanf("%d" ,&a);
        if (a==0)
        {
            break;
        }
        
        if (a%2==0)
        {
            S = S + a;
        }
        i++;
    }
printf("Sumata na chislata = %d" ,S);
    return 0;
}

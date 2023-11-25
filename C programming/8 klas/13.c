//13.Да се получи числото m записано с цифрите на n в обратен ред.

#include <stdio.h>

int main()
{
    int n,m=0;

    do {
        printf("\nn = ");
        scanf("%d", &n);
    }while(n<1);

    do{
        m = m*10 + n%10;
        n = n/10;
    } while(n>0);

    printf("\nm = %d", m);
}
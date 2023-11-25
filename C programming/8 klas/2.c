//2.max от n числа
#include <stdio.h>
#include <stdlib.h>

int a, max, i, n;
int main()
{

    do {
        printf("\n n=");
        scanf("%d", &n);
    }while(n<1);

    printf("\n a=");
    scanf("%d", &a);
    max=a;
    i=2;

    while(i<=n){
        printf("\n a=");
        scanf("%d", &a);
        if(a>max) {
            max=a;
        }
        i++;
    }while(i<=n);

    printf("\n max=%d", max);
}
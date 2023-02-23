//12.Да се намери сумата от цифрите на дадено естествено число

#include <stdio.h>

int a,sum;
int main()
{

    do {
        printf("\na = ");
        scanf("%d", &a);
    }while(a<1);
sum=0;
while(a>0)
{
sum = sum + a%10;
a=a/10;
}
printf("Сумата от цифрите = %d" ,sum);
}
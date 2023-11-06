//14.Да се намери колко пъти дадена цифра се срещав записа на ест число n

#include <stdio.h>

int n,i,a;
void main()
{
int n,i,a;
    do {
        printf("\n n= ");
        scanf("%d", &n);
    }while(n<1);
        do {
        printf("\na = ");
        scanf("%d", &a);
    }while(a<0 || a>9);
i=0;
while(n>0)
{
if(n%10==a)
{
i=i+1;
}
n=n/10;
}
printf("\n Среща се  %d пъти" ,i);
}

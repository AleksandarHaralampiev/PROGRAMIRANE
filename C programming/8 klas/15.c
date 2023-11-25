//15.Да се намери дали дадена цифра се срещав записа на ест число n

#include <stdio.h>

void main()
{
int n,i,a,yes;
    do {
        printf("\nn = ");
        scanf("%d", &n);
    }while(n<1);
        do {
        printf("\na = ");
        scanf("%d", &a);
    }while(a<0 || a>9);
i=0;
yes=0;
while(n>0 && yes==0)
{
if(n%10==a)
{
yes=1;
}
n=n/10;
}
if(yes==1)
printf("Да, среща се");
else
printf("Не, не се среща!");
}

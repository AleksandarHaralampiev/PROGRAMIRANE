//17.Числото M от четните цифри на N в същата последователност

#include <stdio.h>

void main()
{
int n,m,i;
    do {
        printf("\nn = ");
        scanf("%d", &n);
    }while(n<1);
i=1;
m=0;
while(n>0)
{
if(n%2==0){
m=m+(n%10)*i;
i=i*10;}
n=n/10;
}
printf("M = %d" ,m);
}

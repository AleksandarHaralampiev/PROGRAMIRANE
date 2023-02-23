//19.Да се извадят всички делители на естественото число n и броят им

#include <stdio.h>

void main()
{
int n,i,x;
    do {
        printf("\nn = ");
        scanf("%d", &n);
    }while(n<1);
i=0;
x=1;
while(x<=n){
if(n%x==0)
{
    printf("\ndelitel = %d" ,x);
    i=i+1;
}
x=x+1;
}
printf("\nNumber of deviders = %d" ,i);
}

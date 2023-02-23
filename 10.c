//max ot n chisla no samo tezi koito se delyat na 3
#include <stdio.h>
#include <stdlib.h>

void main()
{
int  max,n,i,a,Yes;
do {
    printf("\nn = ");
    scanf("%d", &n);
}while(n<1);
i=1;
Yes=0;
while(i<=n){
    printf("\na = ");
    scanf("%d", &a);
    i=i+1;
    if(a%3==0){
        if(Yes==0){
            Yes=1;
            max=a;
        }else{
        if(max<a){
            max=a;
            }
        }
    }
}
if(Yes==1){
    printf("\nMax ot n chisla koito se del na 3 = %d",max);
}else{
    printf("\nNqma kratni na 3");
}
}
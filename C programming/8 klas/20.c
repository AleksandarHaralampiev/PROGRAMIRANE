//20.Да се извадят всички прости делители на естественото число n и броят им
#include <stdio.h>
#include <stdlib.h>

void main()
{
int n,i,d,br;
printf("\nn = ");
scanf("%d",&n);
while(n<1){
    printf("\nn = ");
    scanf("%d",&n);
}
br=0;
i=2;
while(i<=n){
    if(n%i==0){
        d=2;
        while(i%d!=0){
            d=d+1;
        }
        if(i==d){
            printf("\nprost delitel: %d",i);
            br=br+1;
        }
    }
i=i+1;
}
printf("\n\nBroqt im e: %d",br);
}

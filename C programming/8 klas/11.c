//11.Броят на цифрите в дадено естествено число

#include <stdio.h>

int a,i;
int main()
{
    do {
        printf("\na =");
        scanf("%d", &a);
    }while(a<1);
i=0;
while(a>0)
{
a=a/10;
i=i+1;
}
printf("Броят на цифрите = %d" ,i);
}
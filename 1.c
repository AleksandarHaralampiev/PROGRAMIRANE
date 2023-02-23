//1.размяната на 2 числа 1 начин
#include <stdio.h>
#include <stdlib.h>

int main()
{
int a, b ,c;
printf("\na = ");
scanf("%d" ,&a);
printf("\nb = ");
scanf("%d" ,&b);
c=a + b;
a=b;
b=c-a;
printf("\na = %d \nb = %d" ,a, b);
}

//размяната на 2 числа 2 начин
#include <stdio.h>
#include <stdlib.h>

int main()
{
int a, b;
printf("\na = ");
scanf("%d" ,&a);
printf("\nb = ");
scanf("%d" ,&b);
a = a + b;
b = a - b;
a = a - b;
printf("\na = %d \nb = %d" ,a, b);
}

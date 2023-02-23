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




//3.Да се намери сумата на естествените числа от 1 до n.

#include <stdio.h>

int i,n,sum;
int main()
{
    do {
        printf("\nn=");
        scanf("%d", &n);
    }while(n<1);
    
    i=1;
    sum=0;
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    printf("%d",sum);
}





//4.Да се намери сумата на n произволни числа.

#include <stdio.h>

int n,a,i,sum;
int main()
{
    do {
        printf("\nn=");
        scanf("%d", &n);
    }while(n<1);

    sum=0;
    i=1;
    while(i<=n)
    {
        printf("a=");
        scanf("%d",&a);
        sum=sum+a;
        i++;

    }
    printf("%d",sum);
}





//5.Да се намери средният успех на учениците от един клас.

#include <stdio.h>

int Students,o,i;
int uspeh;
int main()
{
    printf("Students=");
    scanf("%d",&Students);
    i=1;
    uspeh=0;
    while(i<=Students)
    {
        printf("ochenka=");
        scanf("%d",&o);
            uspeh=uspeh+o;
            i++;
    }
    uspeh=uspeh/Students;
    printf("The Average Score is = %d",uspeh);
}






//6.Да се намери сумата на n числа, но само тези, които се делят на 3.

#include <stdio.h>

int n,a,i,sum;
int main()
{
    do {
        printf("\nn=");
        scanf("%d", &n);
    }while(n<1);
    i=1;
    sum=0;
    while(i<=n)
    {
        printf("a=");
        scanf("%d",&a);
        if(a%3==0)
            {
                sum=sum+a;
            }

        i++;
    }
     printf("%d",sum);
}





//7.Сумата на числата от m до n

#include <stdio.h>

int n,m,sum;
int main()
{
    do {
        printf("\nm = ");
        scanf("%d", &m);
        printf("\nn = ");
        scanf("%d", &n);
    }while(m>n);
sum = 0;
while (m<=n)
{
sum = sum +m;
m = m+1;
}
printf("\nsum = %d" ,sum);
}




//8.Сумата на четните числата от m до n

#include <stdio.h>

int n,m,sum;
int main()
{
    do {
        printf("\nm = ");
        scanf("%d", &m);
        printf("\nn = ");
        scanf("%d", &n);
    }while(m>n);
sum = 0;
if(m%2!=0)
{
    m = m + 1;
}
while (m<=n)
{
sum = sum +m;
m = m+2;
}
printf("\nsum = %d" ,sum);
}




//9.Сумата на нечетните числата от m до n

#include <stdio.h>

int n,m,sum;
int main()
{
    do {
        printf("\nm = ");
        scanf("%d", &m);
        printf("\nn = ");
        scanf("%d", &n);
    }while(m>n);
sum = 0;
if(m%2==0)
{
    m = m + 1;
}
while (m<=n)
{
sum = sum +m;
m = m+2;
}
printf("\nsum = %d" ,sum);
}





//10.max ot n chisla no samo tezi koito se delyat na 3
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






//13.Да се получи числото m записано с цифрите на n в обратен ред.

#include <stdio.h>

int main()
{
    int n,m=0;

    do {
        printf("\nn = ");
        scanf("%d", &n);
    }while(n<1);

    do{
        m = m*10 + n%10;
        n = n/10;
    } while(n>0);

    printf("\nm = %d", m);
}





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





//16.Да се определи броят на единиците в двоичното представяне на дадено естествено число.

#include <stdio.h>

void main()
{
    int n,i;
    do {
        printf("\nn = ");
        scanf("%d", &n);
    }while(n<1);
    i=0;
    while(n>0)
    {
        if(n%2==1)
        i++;
        n=n/2;
    }
    printf("%d",i);
}





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






//18.Да се определи дали дадено естествено число по-голямо или равно на 2 е просто
void main()
{
int n,i;
    do {
        printf("\nn = ");
        scanf("%d", &n);
    }while(n<1);
i=2;
while(n%i!=0)
{
i=i+1;
}
if(i==n)
printf("\nДа, просто е");
else
printf("\nНе е просто :(");
}





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
//DONEEE!!!!!!!!
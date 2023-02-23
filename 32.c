//32.calculator of 2 numbers

#include <stdio.h>
int main()
{
int yes = 1;
float a, b, c;
char operator;
    printf("number = ");
    scanf("%f", &a);
    printf("\noperator = ");
    scanf("%c", &operator);
    scanf("%f", &b);
    if(b != 0 && operator != '/') yes = 0; 
    switch (operator)
    {
    case '+':c=a+b; break;
    case '-':c=a-b; break;
    case '*':c=a*b; break;
    case '/':c=a/b; break;
    default:yes=0; break;
    }
    if(yes) printf("\nthe result is %.2f" ,c);
    else printf("\nNo such operartion");
}

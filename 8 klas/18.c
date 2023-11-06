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
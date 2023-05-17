/*void change(int a,int b)
{
    int c;
    c=a;
    a=b;
    b=c;

}
void main()
{
    int x = 5 , y = 7;
    change(x, y);
    printf("x = %d, y = %d", x, y);
    }


    int x,y;
void change()
{
    int c;
    c=x;
    x=y;
    y=c;

}
void main()
{
    int x = 5 , y = 7;
    change();
    printf("x = %d, y = %d", x, y);
}
*/

void change(int *pa , int *pb)
{
    int c;
    c=*pa;
    *pa=*pb;
    *pb=c;
}
void main()
{
    int x = 5 , y = 7;
    int m=10,n=6;
    change(&x, &y);
    change(&m, &n);
    printf("x = %d, y = %d", x, y);
    printf("\nm = %d, n = %d",m ,n);
}
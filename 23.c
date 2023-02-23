//23. a na stepen n   
#include <stdio.h>

int main()
{
    float a, n, m, S, i;
    do
    {
        printf("a = ");
        scanf("%f", &a);
    } while (a == 0);
    printf("n = ");
    scanf("%f", &n);
    if (n < 0)
    {
        m = -n;
    }
    else
    {
        m = n;
    }
    i = 1;
    S = 1;
    while (i <= m)
    {
        S = S * a;
        i++;
    }
    if (n >= 0)
    {
        printf("sumata = %f", S);
    }
    else
    {
        printf("sumata = %f", 1 / S);
    }
}

//5.Да се намери средният успех на учениците от един клас.

#include <stdio.h>

int main()
{
int Students, i;
float o;
float uspeh;
    do {
        printf("\nStudents = ");
        scanf("%d", &Students);
    }while(Students<1);
    i=1;
    uspeh=0;
    while(i<=Students)
    {
       do
       { 
        printf("ochenka = ");
        scanf("%f",&o);
       } while(o<2 || o>6);
            uspeh=uspeh+o;
            i++;
    }
    uspeh=uspeh/Students;
    printf("The Average Score is = %.2f",uspeh);
}
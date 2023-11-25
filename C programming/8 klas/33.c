//33.calculator of multiple numbers
/*да се състави програма калкулатор, която извършва четирите основни аритметични действия ( - + % *) без скоби и без приоритет на операциите до въвеждане на равно*/
#include <stdio.h>
#include <math.h>

int main()
{
   float a , b;
    char oper;
    printf("\nplease enter a number:");
    scanf("%f" ,&a);

    do{

        printf("\nplease enter operation:");
        getchar();
        oper = getchar();
        if(oper =='=')break;
        printf("please enter a number:");
        scanf("%f", &b);
        switch(oper){
            case'+':a = a + b;break;
            case'-':a = a - b;break;
            case'*':a = a * b;break;
            case'/':
            while (b == 0) {
                printf("\nPlease enter another number");
                scanf("%f", &b);
            }
            a = a / b;
            break;
        }
    }while(1);
    printf("\na=%.2f" ,a);


    return 0;
}

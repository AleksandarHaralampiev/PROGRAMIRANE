// vision of variables in C 
#include <stdio.h>

int main(){
    {
    int a = 10;
    printf("a = %d\n", a);
    }
    {
    int a = 20;
    printf("a = %d\n", a);
    }
    {
        for (int i = 0; i < 5; i++)
        {
            int a = 10;
        }
        //the two variables i and a are only visible in here
    
    }
    //the variable a is not visible here
    
    
    return 0;
}   
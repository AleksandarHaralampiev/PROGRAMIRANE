//global variable lesson

#include <stdio.h>

int global = 10;

int createnewtrhread(){
    printf("creating new thread\n");
    global++;
    printf("global = %d\n", global);
}

int main(){
    printf("global = %d\n", global);
    {
        int global = 20;
        printf("global = %d\n", global);
        createnewtrhread();
        printf("global = %d\n", global);

    }
    printf("global = %d\n", global);
    return 0;



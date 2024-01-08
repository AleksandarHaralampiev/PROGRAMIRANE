#include <stdio.h>

#define SWAP(A, B, TYPE) \
TYPE temp = A; \
A = B; \
B = temp;



int main(){
    char a = 'a', b = 'b';

    SWAP(a, b, char);

    printf("a = %c\n", a);
    printf("b = %c\n", b);


    return 0;
}
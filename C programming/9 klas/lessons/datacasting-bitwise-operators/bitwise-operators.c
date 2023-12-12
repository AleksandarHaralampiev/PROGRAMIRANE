#include <stdio.h>

int main(){
    //Assignment operators - =, +=, -=, *=, /=, %=
    //Comparison operators - ==, !=, >, <, >=, <=
    //Aritmetic operators - +, -, *, /, %
    //Logical operators - &&, ||, !
    //Ternery operator - a<b ? a / b
    //Bitwise operators - &, |, ^, ~, <<, >>
    //<< -C bitwise left shift
    //>> - bitwise right shift
    
    //& - bitwise and
    char a = 6;
    //0000 0110

    char b = 7;
    //0000 0111
    char c = a&b;
    //0000 0110
    //0000 0111
    //0000 0110 6&7=6
    printf("c = %d\n", c);

    //| - bitwise or
    char d = a|b;
    //0000 0110
    //0000 0111
    //0000 0111 6|7=7
    printf("d = %d\n", d);

    //~ - bitwise not
    char e = ~a;
    //0000 0110
    //~0000 0110
    //1111 1001
    printf("e = %d\n", e);

    //^ - bitwise xor
    char f = a^b;
    //0000 0110
    //0000 0111
    //0000 0001 6^7=1
    printf("f = %d\n", f);

    //<< - bitwise left shift
    char g = a<<2;
    //0000 0110
    //0001 1000 - 24
    printf("g = %d\n", g);

    //>> - bitwise right shift
    char h = a>>2;
    //0000 0110
    //0000 0001 - 1
    printf("h = %d\n", h);

    long i = 6;
    //0000 0110
    long j = i<<8;
    //0000 0110 0000 0000
    printf("j = %ld\n", j);

    unsigned char c1 = 6;\
    for (int i = 7; i>=0 ; i--) {
        printf("%d", (c1>>i)&1);//the for loop prints the binary representation of the number
    }
    printf("\n");
    return 0;
}
/* data types in c */

#include <stdio.h> 
#include <limits.h>


int main() {
    int a = 5;
    float b = 5.5;
    char c = 'c';
    char d[] = "Hello World";
    short int e = 5;
    long int f = 5;
    long long int g = 5;
    unsigned int h = 5;
    signed int i = 5;
    long double j = 5.5;
    //long long is bigger than int and smaller than long double
    printf("short int e = %d\n", e);
    printf("long int f = %d\n", f);
    printf("long long int g = %d\n", g);
    printf("unsigned int h = %d\n", h);
    printf("signed int i = %d\n", i);
    printf("long double j = %f\n", j);
    printf("int a = %d\n", a);
    printf("float b = %f\n", b);
    printf("char c = %c\n", c);
    printf("char d[] = %s\n", d);

    //00000110 - binary representation of 6
    char x = 6;
    printf("the number is: %d\n", x);
    //one complement =-128 to 0,0 to 128 - pos.num.128 to 255 - neg.num.
    //11111001 - binary representation of -6 in ones complement representation
    //00000000 - binary representation of 0 11111111 - binary representation of 0
    //two complement =-128 to 0,0 to 127 - pos.num.128 to 255 - neg.num.
    //11111001 - ones comp of -6
    //00000001 - add 1
    char y = 250;
    printf("the number is: %d\n", y);
    //00000110 - binary representation of 6
    //11111001 - binary representation of -6 in ones complement representation
    //sign magnitude =-128 to 0,0 to 127 - pos.num.128 to 255 - neg.num.
    char z = 128;
    printf("the number is: %d\n", z);    
    unsigned char w = 250;
    printf("the number is: %d\n", w);
    unsigned int k = 250;
    printf("the number is: %d\n", k);
    signed int l = 250;
    printf("the number is: %d\n", l);
    printf("MAX CHAR = %d\n", CHAR_MAX);
    printf("MIN CHAR = %d\n", CHAR_MIN);
    printf("MAX INT = %d\n", INT_MAX);
    printf("MIN INT = %d\n", INT_MIN);
    printf("MAX LONG = %ld\n", LONG_MAX);
    printf("MIN LONG = %ld\n", LONG_MIN);
    printf("MAX SHORT = %d\n", SHRT_MAX);
    printf("MIN SHORT = %d\n", SHRT_MIN);
    printf("MAX SIGNED CHAR = %d\n", SCHAR_MAX);
    printf("MIN SIGNED CHAR = %d\n", SCHAR_MIN);
    printf("MAX UNSIGNED CHAR = %d\n", UCHAR_MAX);
    printf("MAX UNSIGNED INT = %u\n", UINT_MAX);
    printf("MAX UNSIGNED LONG = %lu\n", ULONG_MAX);
    printf("MAX UNSIGNED SHORT = %d\n", USHRT_MAX);
    
    char r = CHAR_MAX;
    printf("the number is: %d\n", r);
    r++;
    printf("the number is: %d\n", r);
    /*for (int i = 0; 1; i++) {
        printf("the number is: %d\n", r);
        r++;
    }
    */
    char s = 5;
    size_t t = sizeof(s);
    printf("the size of char is: %zu\n", t);
    //adrressing in memory  
    
    
    
    
    return 0;
}
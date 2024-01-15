#include <stdio.h>

int main() {
    unsigned char lights = 237; // 11101101

    for (int i = 0; i < 8; i++) {
        unsigned char light = 1 << i;
        if ((lights & light) != 0) {
            printf("Light %d is on\n", i + 1);
            if ((i + 1) % 2 == 0) {
                lights = lights &  ~light;
            }
        }
    }

    printf("After turning of the even lighjts:  %d\n", lights);

    return 0;
}
    //the size of unsigned char is 1 byte
    //the size of signed char is 1 byte
    //the size of unsigned short is 2 bytes
    //the size of signed short is 2 bytes
    //the size of unsigned int is 4 bytes
    //the size of signed int is 4 bytes
    //the size of unsigned long is 4 bytes
    //the size of signed long is 4 bytes
    //the size of unsigned long long is 8 bytes
    //the size of signed long long is 8 bytes
    //the size of float is 4 bytes
    //the size of double is 8 bytes
    //the size of long double is 8 bytes
#include "mystrings.h"
#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Въведи само два аргумента\n");
        return 1;
    }
    if (strlength(argv[1]) > 50 || strlength(argv[2]) > 50) {
        printf("Трябва низовете да са по-малко от 50 символа\n");
        return 1;
    }
    strconcat(argv[1], argv[2]);
    printf("%s\n", argv[1]);
    return 0;
}
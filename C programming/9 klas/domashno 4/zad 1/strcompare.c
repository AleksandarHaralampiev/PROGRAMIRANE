#include "mystrings.h"
#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Въведи само два аргумента\n");
        return 1;
    }
    printf("%d\n", strcompare(argv[1], argv[2]));
    return 0;
}
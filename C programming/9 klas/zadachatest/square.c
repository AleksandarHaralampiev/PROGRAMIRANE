#include <stdio.h>
#include <stdlib.h>
#include "maths.h"

int main(int argc, char *argv[]) {
    int num = atoi(argv[1]);
    printf("%d\n", SQUARE(num));
    return 0;
}   
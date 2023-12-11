#include <stdio.h>
#include "maths.h"

int powerof(int a, int b) {
    int result = 1;
    for(int i = 0; i < b; i++) {
        result *= a;
    }
    return result;
}
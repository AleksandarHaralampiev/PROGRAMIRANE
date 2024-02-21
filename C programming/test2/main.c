#include <stdio.h>
#include "sum.h"

int main() {
    for(int i = 0; i < 7; i++) {
        addfactrieltosum();
    }
    printf("Sum = %ld\n", getSum());
    return 0;
}
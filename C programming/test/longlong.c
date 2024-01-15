#include <stdio.h>
#include <limits.h>

int main(void) {
    printf("Size of long long: %zu bits\n", sizeof(long long) * 8);
    printf("Max : %lld\n", LLONG_MAX);
    printf("Min : %lld\n", LLONG_MIN);
    return 0;
}
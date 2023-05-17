//a^n with a separate function
#include <stdio.h>

// Function to calculate a raised to the power of n
int power(int a, int n) {
    int result = 1;
    for (int i = 0; i < n; i++) {
        result *= a;
    }
    return result;
}

int main() {
    int a, n;
    printf("Enter the base (a): ");
    scanf("%d", &a);
    printf("Enter the exponent (n): ");
    scanf("%d", &n);
    int result = power(a, n);
    printf("%d^%d = %d\n", a, n, result);
    return 0;
}

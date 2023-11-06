#include <stdio.h>

#define MAX_DIGITS 10

int main() {
    char c;
    int sign = 1, value = 0, digit_count = 0;
    printf("Enter a sequence of symbols: ");
    while ((c = getchar()) != '\n') {
        if (c >= '0' && c <= '9') {
            if (digit_count == MAX_DIGITS) {
                printf("Invalid input\n");
                return 1;
            }
            value = value * 10 + (c - '0');
            digit_count++;
        } else if (c == '+' && digit_count == 0) {
            sign = 1;
        } else if (c == '-' && digit_count == 0) {
            sign = -1;
        } else {
            printf("Invalid input\n");
            return 1;
        }
    }
    printf("Parsed value: %d\n", sign * value);
    return 0;
}

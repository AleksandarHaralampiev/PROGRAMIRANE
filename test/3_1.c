//да се въведе последователност от символи, завършваща с enter и да се формира число, ако е възможно да се формира цяло число от въведените символи, ако не да се изведе съобщение за грешка цяло число: последователност от цифри, която може да започва със знак + или - (знакът може да липсва)

#include <stdio.h>

int main() {
    char c;
    int sign = 1, value = 0, digit_count = 0;
    printf("Enter a sequence of symbols: ");
    while ((c = getchar()) != '\n') {
        if (c >= '0' && c <= '9') {
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

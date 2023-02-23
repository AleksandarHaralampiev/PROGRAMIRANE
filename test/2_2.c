//да се въведе последователност от скоби и да се провери дали те са балансирани
#include <stdio.h>
#include <ctype.h>

int main() {
    int open_count = 0, close_count = 0;
    char c;

    printf("Enter a sequence of parentheses: ");

    while ((c = getchar()) != '\n') {
        if (c == '(') {
            open_count++;
        } else if (c == ')') {
            close_count++;
            if (close_count > open_count) {
                printf("Parentheses are not balanced\n");
                return 0;
            }
        }
    }

    if (open_count == close_count) {
        printf("Parentheses are balanced\n");
    } else {
        printf("Parentheses are not balanced\n");
    }

    return 0;
}
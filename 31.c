//31.Какъв е въведения символ
#include <stdio.h>

int main() {
    char input;

    printf("Enter a symbol: ");
    scanf("%c", &input);

    if (input >= '0' && input <= '9') {
        printf("The symbol is a number.\n");
    } else if ((input >= 'a' && input <= 'z') || (input >= 'A' && input <= 'Z')) {
        printf("The symbol is a letter.\n");
    } else {
        printf("The symbol is other.\n");
    }
    return 0;
}

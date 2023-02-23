//30.Въвежда се малка буква и се връща голяма буква 
#include <stdio.h>

int main() {
    char input;

    printf("Enter a symbol: ");
    scanf(" %c", &input);

    if (input >= 'a' && input <= 'z') {
        printf("The capital of %c is %c\n", input, input - 'a' + 'A');
    } else {
        printf("The symbol is not a small letter.\n");
    }
    return 0;
}

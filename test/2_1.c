//calculator that does addition, subtraction, multiplication and division
#include <stdio.h>

int main() {
    char op;
    float num1, num2, result;

    while (1) {
        printf("Enter an arithmetic operation (+, -, *, /) or '=' to exit: ");
        scanf("%c", &op);

        if (op == '=') {
            printf("Exiting calculator...\n");
            break;
        }

        printf("Enter the first number: ");
        scanf("%f", &num1);

        printf("Enter the second number: ");
        scanf("%f", &num2);

        switch(op) {
            case '+':
                result = num1 + num2;
                printf("%.2f + %.2f = %.2f\n", num1, num2, result);
                break;
            case '-':
                result = num1 - num2;
                printf("%.2f - %.2f = %.2f\n", num1, num2, result);
                break;
            case '*':
                result = num1 * num2;
                printf("%.2f * %.2f = %.2f\n", num1, num2, result);
                break;
            case '/':
                if (num2 == 0) {
                    printf("Error: division by zero\n");
                } else {
                    result = num1 / num2;
                    printf("%.2f / %.2f = %.2f\n", num1, num2, result);
                }
                break;
            default:
                printf("Invalid operator: %c\n", op);
                break;
        }

        // clear input buffer
        while (getchar() != '\n') {}
    }

    return 0;
}
#include <stdio.h>

void decimalToBinaryArray(int decimalNum) {
    int binaryNum[32]; // Array to store binary number
    int i = 0;

    // Handling the case when the decimal number is 0
    if (decimalNum == 0) {
        printf("Binary: 0");
        return;
    }

    // Convert decimal to binary by dividing the decimal number by 2
    while (decimalNum > 0) {
        binaryNum[i] = decimalNum % 2;
        decimalNum = decimalNum / 2;
        i++;
    }

    // Printing the binary number in reverse order
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaryNum[j]);
    }
}

void decimalToBinaryRecursive(int decimalNum) {
    // Base case
    if (decimalNum == 0) {
        return;
    }

    decimalToBinaryRecursive(decimalNum / 2);
    printf("%d", decimalNum % 2);
}

int main() {
    int decimalNum;
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNum);

    decimalToBinaryArray(decimalNum);

    printf("\n");

    printf("Binary: ");
    if (decimalNum == 0) {
        printf("0");
    } else {
        decimalToBinaryRecursive(decimalNum);
    }

    return 0;
}

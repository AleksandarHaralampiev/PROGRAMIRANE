#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double pow2(double num) {
    return pow(num, 2);
}

double pow4(double num) {
    return pow(num, 4);
}

void map(double* arr, int size, double (*func)(double)) {
    for(int i = 0; i < size; i++) {
        arr[i] = func(arr[i]);
    }
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    double* arr = (double*)malloc(n * sizeof(double));
    if(arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter the elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%lf", &arr[i]);
    }

    int choice;
    printf("Enter 0 for pow2 or 1 for pow4: ");
    scanf("%d", &choice);

    if(choice == 0) {
        map(arr, n, pow2);
    } else if(choice == 1) {
        map(arr, n, pow4);
    } else {
        printf("Invalid choice\n");
        free(arr);
        return 1;
    }

    printf("Result array: ");
    for(int i = 0; i < n; i++) {
        printf("%lf ", arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}
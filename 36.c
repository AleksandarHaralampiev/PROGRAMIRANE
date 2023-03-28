//36.да се намери макса и минимума на няк'ъв масив от максимум 100 числа и да се разменят местата им

#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int n, i, max_idx, min_idx, temp;

    printf("Enter the size of the array (max 100): ");
    scanf("%d", &n);

    // Read in the array elements
    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find the index of the maximum element in the array
    max_idx = 0;
    for (i = 1; i < n; i++) {
        if (arr[i] > arr[max_idx]) {
            max_idx = i;
        }
    }

    // Find the index of the minimum element in the array
    min_idx = 0;
    for (i = 1; i < n; i++) {
        if (arr[i] < arr[min_idx]) {
            min_idx = i;
        }
    }

    // Swap the maximum and minimum elements
    temp = arr[max_idx];
    arr[max_idx] = arr[min_idx];
    arr[min_idx] = temp;

    // Print the resulting array
    printf("Resulting array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

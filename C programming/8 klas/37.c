//check if the array is symmetrical
#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int n, i, is_symmetric;

    printf("Enter the size of the array (max %d): ", MAX_SIZE);
    scanf("%d", &n);

    // Read in the array elements
    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Check if the array is symmetric
    is_symmetric = 1;
    for (i = 0; i < n/2; i++) {
        if (arr[i] != arr[n-1-i]) {
            is_symmetric = 0;
            break;
        }
    }

    // Print the result
    if (is_symmetric) {
        printf("The array is symmetric.\n");
    } else {
        printf("The array is not symmetric.\n");
    }

    return 0;
}

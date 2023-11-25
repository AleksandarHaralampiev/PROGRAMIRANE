#include <stdio.h>

#define DEBUG

void sortArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        for(int j = i + 1; j < size; j++) {
            if(arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int sumIndicesDivisibleBy3(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        if(i % 3 == 0) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    int arr[] = {5, 2, 8, 9, 1, 7, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    sortArray(arr, size);

    int sum = sumIndicesDivisibleBy3(arr, size);

    #ifdef DEBUG
        printf("Sorted array: ");
        for(int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");

        printf("SUM: %d\n", sum);
    #endif

    return 0;
}
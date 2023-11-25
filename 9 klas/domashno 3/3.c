#include <stdio.h>

void sortArray(int arr[], int size) {
    #ifdef _WIN32
        // Bubble sort for Windows
        for(int i = 0; i < size - 1; i++) {
            for(int j = 0; j < size - i - 1; j++) {
                if(arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    #elif __linux__
        // Selection sort for Linux
        for(int i = 0; i < size - 1; i++) {
            int minIndex = i;
            for(int j = i + 1; j < size; j++) {
                if(arr[j] < arr[minIndex]) {
                    minIndex = j;
                }
            }
            int temp = arr[minIndex];
            arr[minIndex] = arr[i];
            arr[i] = temp;
        }
    #elif __APPLE__
        // Insertion sort for macOS
        for(int i = 1; i < size; i++) {
            int key = arr[i];
            int j = i - 1;
            while(j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            arr[j + 1] = key;
        }
    #else
        // Reverse the array
        for(int i = 0; i < size / 2; i++) {
            int temp = arr[i];
            arr[i] = arr[size - i - 1];
            arr[size - i - 1] = temp;
        }
    #endif
}

int main() {
    int arr[] = {5, 2, 8, 9, 1, 7, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    sortArray(arr, size);

    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
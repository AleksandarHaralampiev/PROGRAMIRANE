//39. Measure the time taken by different sorting algorithms for sorting an array of 10000 elements. Compare the time taken by different sorting algorithms.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 10000

int main()
{
    int i, j, temp, min_idx, key;
    int arr[ARRAY_SIZE];

    // Generate random array
    srand(time(NULL));
    for (i = 0; i < ARRAY_SIZE; i++) {
        arr[i] = rand();
    }

    // Test bubble sort
    clock_t t1 = clock();
    for (i = 0; i < ARRAY_SIZE - 1; i++) {
        for (j = 0; j < ARRAY_SIZE - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    clock_t t2 = clock();
    double bubble_sort_time = (double)(t2 - t1) / CLOCKS_PER_SEC;

    // Test selection sort
    srand(time(NULL));
    for (i = 0; i < ARRAY_SIZE; i++) {
        arr[i] = rand();
    }
    t1 = clock();
    for (i = 0; i < ARRAY_SIZE - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < ARRAY_SIZE; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
    t2 = clock();
    double selection_sort_time = (double)(t2 - t1) / CLOCKS_PER_SEC;

    // Test insertion sort
    srand(time(NULL));
    for (i = 0; i < ARRAY_SIZE; i++) {
        arr[i] = rand();
    }
    t1 = clock();
    for (i = 1; i < ARRAY_SIZE; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    t2 = clock();
    double insertion_sort_time = (double)(t2 - t1) / CLOCKS_PER_SEC;

    // Test with custom input array
    int custom_arr[] = {4, 6, 2, 8, 1, 9, 5, 7, 3};
    int custom_arr_size = sizeof(custom_arr) / sizeof(custom_arr[0]);
    t1 = clock();
    for (i = 0; i < custom_arr_size - 1; i++) {
        for (j = 0; j < custom_arr_size - i - 1; j++) {
            if (custom_arr[j] > custom_arr[j + 1]) {
                temp = custom_arr[j];
                custom_arr[j] = custom_arr[j + 1];
                custom_arr[j + 1] = temp;
            }
        }
    }
    t2 = clock();
    double custom_sort_time = (double)(t2 - t1) / CLOCKS_PER_SEC;

    // Print results
    printf("Bubble sort time: %f seconds\n", bubble_sort_time);
    printf("Selection sort time: %f seconds\n", selection_sort_time);
    printf("Insertion sort time: %f seconds\n", insertion_sort_time);
    printf("Custom sort time: %f seconds\n", custom_sort_time);

    return 0;
}

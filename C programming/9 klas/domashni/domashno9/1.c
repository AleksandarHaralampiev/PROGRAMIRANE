#include <stdio.h>
#include <string.h>

#define coloni 4

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int *arr, int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (*(arr+j) > *(arr+j+1))
                swap(arr+j, arr+j+1);
        }
    }
}

void strhalf(char *str, char **p) {
    *p = str + strlen(str) / 2;
}

void printArray(int (*arr)[coloni], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < coloni; j++)
            printf("%d ", *(*(arr+i)+j));
        printf("\n");
    }
}

int main() {
    char str[] = "Zdrawei, swqt!";
    char *p;
    strhalf(str, &p);
    printf("%s\n", p);

    int arr[5] = {5, 3, 2, 4, 1};
    sort(arr, 5);
    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    printf("\n");

    int arr2[3][coloni] = {
    {1, 2, 3, 4}, 
    {5, 6, 7, 8}, 
    {9, 10, 11, 12}
    };
    printArray(arr2, 3);

    return 0;
}
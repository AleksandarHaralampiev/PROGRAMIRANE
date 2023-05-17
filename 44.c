//merge arrays woohoo

#include <stdio.h>

#define MAX_SIZE 10

void merge(int a[], int b[], int c[], int size_a, int size_b);
void sort(int arr[], int size);

int main() {
    int a[MAX_SIZE], b[MAX_SIZE], c[2 * MAX_SIZE];
    int size_a, size_b;

    printf("Enter the size of array A (up to 10): ");
    scanf("%d", &size_a);
    printf("Enter the elements of array A: ");
    for (int i = 0; i < size_a; i++) {
        scanf("%d", &a[i]);
    }
    sort(a, size_a);

    printf("Enter the size of array B (up to 10): ");
    scanf("%d", &size_b);
    printf("Enter the elements of array B: ");
    for (int i = 0; i < size_b; i++) {
        scanf("%d", &b[i]);
    }
    sort(b, size_b);

    merge(a, b, c, size_a, size_b);

    printf("Merged array C: ");
    for (int i = 0; i < size_a + size_b; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");

    return 0;
}

void merge(int a[], int b[], int c[], int size_a, int size_b) {
    int i = 0, j = 0, k = 0;

    while (i < size_a && j < size_b) {
        if (a[i] <= b[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }

    while (i < size_a) {
        c[k++] = a[i++];
    }

    while (j < size_b) {
        c[k++] = b[j++];
    }
}

void sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

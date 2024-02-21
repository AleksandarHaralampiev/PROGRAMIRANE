#include <stdlib.h>

void bubblesort(void* array, int count, int(*compare)(void*, void*), void(*swapelements)(void*, void*)) {
    int* arr = (int*)array;
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (compare(&arr[j], &arr[j + 1]) > 0) {
                swapelements(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void swap(void *a, void *b){
    int temp = *(int *)a;
    *(int *)a = *(int *)b;
    *(int *)b = temp;
}

int comparedesc(const void *const a, const void *const b){
    if(*(const int*) a > *(const int*) b) return -1;
    else if(*(const int*) a < *(const int*) b) return 1;
    else return 0;
}
//test
int compareasc(const void *const a, const void *const b){
    if(*(const int*) a > *(const int*) b) return 1;
    else if(*(const int*) a < *(const int*) b) return -1;
    else return 0;
}


int main() {
    int arr[] = {32, 3223, 23, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubblesort(arr, n, comparedesc, swap);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    bubblesort(arr, n, compareasc, swap);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
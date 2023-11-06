#include <stdio.h>


#define SWAP(A, B, TYPE)    \
TYPE temp = A;              \
A = B;                      \
B = temp;


#define SORT(ARRAY, SIZE, TYPE, COMPARE)        \
for(int i = 0; i < SIZE - 1; i++){              \
    int el = i;                                 \
                                                \
    for(int j = i + 1; j < SIZE; j++){          \
        if(ARRAY[j] COMPARE ARRAY[el]) el = j;  \
    }                                           \
                                                \
    SWAP(ARRAY[i], ARRAY[el], TYPE)             \
}


int main(){
    int arr[10] = {12,2,24,212,21,1,54,6,7,8};

    SORT(arr, 10, int, >);

    for(int i = 0; i < 10; i++){
        printf("\n%d", arr[i]);
    }
}
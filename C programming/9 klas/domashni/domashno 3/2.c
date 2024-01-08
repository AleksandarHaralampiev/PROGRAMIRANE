#include <stdio.h>
#include <math.h>

#define ARRAY_SIZE 5

int main() {
    #if defined(ARRAY_SIZE) && ARRAY_SIZE >= 1 && ARRAY_SIZE <= 10
        int arr[ARRAY_SIZE];
        for(int i = 0; i < ARRAY_SIZE; i++) {
            arr[i] = pow(2, i);
        }

        for(int i = 0; i < ARRAY_SIZE; i++) {
            printf("%d\n", arr[i]);
        }
    #else
        printf("не е въведен размер на масива, който се поддържа от приложението.\n");
    #endif

    return 0;
}
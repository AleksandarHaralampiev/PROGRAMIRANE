#include <stdio.h>

void swap(void *a, void *b){
    int temp = *(int *)a;
    *(int *)a = *(int *)b;
    *(int *)b = temp;
}

int main() {
    int x = 5;
    int y = 10;    
    swap(&x, &y);
    
    pri1ntf("x = %d, y = %d\n", x, y);
    
    return 0;
}

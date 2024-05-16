#include <stdio.h>
int main(){
int arr[7] = {
    [3] = 2,
        [0] = 3,
        [4 ... 6] = 5
    };

    for(int i = 0; i < 7; i++) {
    printf("%d ", arr[i]);
}
return 0;


}
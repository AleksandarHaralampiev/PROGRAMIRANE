#include <stdio.h>
#include <stdlib.h>

int strlenght(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

int main(){
    char str1[100];
    printf("Enter string: ");
    scanf("%s", str1);
    printf("strlength of %s is %d\n", str1, strlenght(str1));
    return 0;
}
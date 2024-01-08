#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("you have entered more thanm one argument\n");
        return 1;
    }
    printf("%d\n", strlength(argv[1]));
    return 0;
}
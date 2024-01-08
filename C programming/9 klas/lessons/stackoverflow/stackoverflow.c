//stackoverflow

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int recursive(int n){
    if (n == 0){
        return 0;
    }
    return recursive(n - 1) + n;
}

//stack ovrflow - when the stack is full and we try to add more data to it - we get stack overflow error - segmentation fault
//stack - the memory where the local variables are stored
//heap - the memory where the dynamic variables are stored

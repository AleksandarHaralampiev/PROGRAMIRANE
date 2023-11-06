#include <stdio.h>

#define DEBUG(variable) \
    do { \
        printf("Variable: %s\n", #variable); \
        printf("Value: %d\n", variable); \
        printf("File: %s\n", __FILE__); \
        printf("Line: %d\n", __LINE__); \
    } while (0)

int main() {
    int aleksandar = 1212;
    DEBUG_PRINT(aleksandar);
    
    return 0;
}
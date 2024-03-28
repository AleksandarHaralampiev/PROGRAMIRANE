#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int **array = (int **)malloc(rows * sizeof(int *));
    if (array == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < rows; i++) {
        array[i] = (int *)malloc(cols * sizeof(int));
        if (array[i] == NULL) {
            printf("Memory allocation for row failed.\n");
            return 1;
        }
    }

    int count = 1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            array[i][j] = count++;
        }
    }

    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++) {
            printf("%d ", array[i][j]);
        }
    }
    printf("\n");

    for (int i = 0; i < rows; i++) {
        free(array[i]);
    }
    free(array);

    return 0;
}
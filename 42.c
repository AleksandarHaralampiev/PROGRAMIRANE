// a program that prints a triangle of a given size using a given character
#include <stdio.h>
#include <stdlib.h>

// Function to print a left-aligned triangle
void print_left_triangle(int n, char c)
{
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("%c",c);
        }
        printf("\n");
    }
    printf("\n");
}

// Function to print a center-aligned triangle
void print_center_triangle(int n, char c)
{
    for(int i = 1; i <= n; i++){
        // print spaces before the characters to center-align the triangle
        for(int j = 1; j <= n-i; j++){
            printf(" ");
        }
        for(int j = 1; j <= 2*i-1; j++){
            printf("%c",c);
        }
        printf("\n");
    }
    printf("\n");
}

// Function to print a right-aligned triangle
void print_right_triangle(int n, char c)
{
    for(int i = 1; i <= n; i++){
        // print spaces before the characters to right-align the triangle
        for(int j = 1; j <= n-i; j++){
            printf(" ");
        }
        for(int j = 1; j <= i; j++){
            printf("%c",c);
        }
        printf("\n");
    }
    printf("\n");
}

int main()
{
    int n;
    char c;

    printf("Enter the number of rows: ");
    scanf("%d",&n);
    printf("Enter the character to use: ");
    scanf(" %c",&c);
    printf("\n");

    if (n <= 0) {
        printf("Error: Invalid number of rows.\n");
        return 1;
    }

    printf("Left-aligned triangle with %d rows and character '%c':\n", n, c);
    print_left_triangle(n, c);

    printf("Center-aligned triangle with %d rows and character '%c':\n", n, c);
    print_center_triangle(n, c);

    printf("Right-aligned triangle with %d rows and character '%c':\n", n, c);
    print_right_triangle(n, c);

    return 0;
}

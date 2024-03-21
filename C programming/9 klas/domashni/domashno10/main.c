#include <stdio.h>
#include <stdlib.h>

#define EXIT_CODE 1

int main() {
    int num_grades, *grades, grade, valid_input;

    printf("Enter the number of existing grades (positiwno chislo): ");
    do {
        if (scanf("%d", &num_grades) != 1 || num_grades < 0) {
            printf("Invalid input. Please enter a positive integer: ");
            scanf("%*[^\n]");
        } else {
            valid_input = 1;
        }
    } while (!valid_input);

    grades = (int*)malloc(num_grades * sizeof(int));
    if (grades == NULL) {
        printf("Memory allocation failed.\n");
        exit(EXIT_CODE);
    }

    for (int i = 0; i < num_grades; i++) {
        printf("Enter grade %d: ", i + 1);
        scanf("%d", &grades[i]);
    }

    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. AVERAGE\n");
        printf("2. Add a new grade\n");
        printf("3. Delete the last grade\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

    
        scanf("%d", &choice);

        if (choice == 1) {
                if (num_grades == 0) {
                printf("НЯМА ОЦЕНКИ\n");
            } else {
                double sum = 0;
                for (int i = 0; i < num_grades; i++) {
                    sum += grades[i];
                }
                double gpa = sum / num_grades;
                printf("GPA: %.2lf\n", gpa);
            }
        } else if (choice == 2) {
            printf("Enter the new grade: ");
            scanf("%d", &grade);
            num_grades++;
            grades = (int*)realloc(grades, num_grades * sizeof(int));
            if (grades == NULL) {
                printf("Memory reallocation failed.\n");
                exit(EXIT_CODE);
            }
            grades[num_grades - 1] = grade;
            printf("Grade added successfully.\n");
        } else if (choice == 3) {
            if (num_grades == 0) {
                printf("НЯМА ОЦЕНКИ\n");
            } else {
                num_grades--;
                grades = (int*)realloc(grades, num_grades * sizeof(int));
                if (grades == NULL) {
                    printf("Memory reallocation failed.\n");
                    exit(EXIT_CODE);
                }
                printf("Last grade deleted successfully.\n");
            }
        } else if (choice == 4) {
            free(grades);
            printf("Exiting program.\n");
        } else {
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}

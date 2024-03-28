#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h> // Add missing include statement

#define MAX_NAME_LENGTH 15
#define MAX_SUBJECTS 100 // Adjust this if needed

int main() {
    int numSubjects;

    // Get number of subjects (positive and non-zero)
    do {
        printf("Enter the number of subjects (positive number): ");
        scanf("%d", &numSubjects);
        getchar(); // Consume the newline character
    } while (numSubjects <= 0);

    if (numSubjects > MAX_SUBJECTS) {
        printf("Error: Maximum number of subjects is %d\n", MAX_SUBJECTS);
        return 1;
    }

    // Allocate memory for subject names array
    char** subjects = (char**)malloc(numSubjects * sizeof(char*));
    for (int i = 0; i < numSubjects; i++) {
        subjects[i] = (char*)malloc(MAX_NAME_LENGTH + 1); // +1 for null terminator
    }

    // Get subject names
    for (int i = 0; i < numSubjects; i++) {
        printf("Enter name of subject %d: ", i + 1);
        fgets(subjects[i], MAX_NAME_LENGTH + 1, stdin);
        subjects[i][strcspn(subjects[i], "\n")] = '\0'; // Remove newline from name
    }

    int numStudents = 0;
    // Dynamic array for student names (starts empty)
    char* studentNames = NULL;

    // Dynamic 2D array for grades (starts empty)
    double** grades = NULL;

    int choice;
    do {
        // Menu
        printf("\nMenu:\n");
        printf("1. Enter a student\n");
        printf("2. Print the class diary\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {

            numStudents++;


            studentNames = (char*)realloc(studentNames, numStudents * MAX_NAME_LENGTH + 1);
            if (studentNames == NULL) {
                printf("Memory allocation failed!\n");
                return 1;
            }


            printf("Enter student name: ");
            int c;
            int index = 0;
            while ((c = getchar()) != '\n' && c != EOF) {
                studentNames[(numStudents - 1) * MAX_NAME_LENGTH + index] = c;
                index++;
            }
            studentNames[(numStudents - 1) * MAX_NAME_LENGTH + index] = '\0';


            grades = (double**)realloc(grades, numStudents * sizeof(double*));
            if (grades == NULL) {
                printf("Memory allocation failed!\n");
                return 1;
            }

            grades[numStudents - 1] = (double*)malloc(numSubjects * sizeof(double));
            if (grades[numStudents - 1] == NULL) {
                printf("Memory allocation failed!\n");
                return 1;
            }

            for (int i = 0; i < numSubjects; i++) {
                printf("Enter grade for %s: ", subjects[i]);
                scanf("%lf", &grades[numStudents - 1][i]);
            }
        } else if (choice == 2) {
            printf("\nClass Diary:\n");

            printf("  ");
            for (int i = 0; i < numSubjects; i++) {
                printf("%-15s", subjects[i]);
            }
            printf("\n");

            for (int i = 0; i < numStudents; i++) {
                printf("%-15s", studentNames + i * MAX_NAME_LENGTH);
                for (int j = 0; j < numSubjects; j++) {
                    printf("%-15.2lf", grades[i][j]);
                }
                printf("\n");
            }
        } else if (choice != 3) {
            printf("Invalid choice.\n");
        }
        }while (choice != 3);

    for (int i = 0; i < numSubjects; i++) {
        free(subjects[i]);
    }
    free(subjects);

    free(studentNames);

    for (int i = 0; i < numStudents; i++) {
        free(grades[i]);
    }
    free(grades);

    printf("Exiting program.\n");

    return 0;
}

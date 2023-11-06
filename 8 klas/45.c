//abe da nqkwa si tam zadacha za poprawka na ocenki 

#include <stdio.h>

#define MAX_SUBJECTS 10
#define MAX_STUDENTS 50

int count_grade_recoveries(int grades[MAX_SUBJECTS][MAX_STUDENTS], int num_subjects, int num_students) {
    int i, j, num_recoveries = 0;

    // Check if any student received a grade of 2 in each subject
    for (i = 0; i < num_subjects; i++) {
        for (j = 0; j < num_students; j++) {
            if (grades[i][j] == 2) {
                num_recoveries++;
                break; // Only need to count one 2 per subject
            }
        }
    }

    return num_recoveries;
}

int main() {
    int grades[MAX_SUBJECTS][MAX_STUDENTS];
    int num_subjects, num_students;
    int i, j, num_recoveries;

    printf("Enter the number of subjects: ");
    scanf("%d", &num_subjects);

    printf("Enter the number of students: ");
    scanf("%d", &num_students);

    // Input the grades for each student and each subject
    for (i = 0; i < num_subjects; i++) {
        printf("Enter the grades for subject %d:\n", i+1);
        for (j = 0; j < num_students; j++) {
            printf("  Student %d: ", j+1);
            scanf("%d", &grades[i][j]);
        }
    }

    num_recoveries = count_grade_recoveries(grades, num_subjects, num_students);

    if (num_recoveries == 0) {
        printf("No grade recoveries required.\n");
    } else {
        printf("%d subject(s) require(s) a grade recovery.\n", num_recoveries);
    }

    return 0;
}

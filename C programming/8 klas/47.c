// да се въведат годишните оценки на учениците и да се изчислят а) средните резултати на ученицик б) средния резултат на класа по всички предмети в) общия среден успех на класа

#include <stdio.h>

int main() {
    int num_students, num_subjects, i, j, sum;
    float grade, student_avg, class_avg, subject_avg, total_avg;

    printf("Enter the number of students in the class: ");
    scanf("%d", &num_students);

    printf("Enter the number of subjects: ");
    scanf("%d", &num_subjects);

    // Calculate average grade for each student
    for (i = 1; i <= num_students; i++) {
        sum = 0;
        for (j = 1; j <= num_subjects; j++) {
            printf("Enter the grade for student %d, subject %d: ", i, j);
            scanf("%f", &grade);
            sum += grade;
        }
        student_avg = (float) sum / num_subjects;
        printf("The average grade for student %d is: %.2f\n", i, student_avg);
    }

    // Calculate average grade for each subject
    for (j = 1; j <= num_subjects; j++) {
        sum = 0;
        for (i = 1; i <= num_students; i++) {
            printf("Enter the grade for student %d, subject %d: ", i, j);
            scanf("%f", &grade);
            sum += grade;
        }
        subject_avg = (float) sum / num_students;
        printf("The average grade for subject %d is: %.2f\n", j, subject_avg);
    }

    // Calculate overall class average
    sum = 0;
    for (i = 1; i <= num_students; i++) {
        for (j = 1; j <= num_subjects; j++) {
            printf("Enter the grade for student %d, subject %d: ", i, j);
            scanf("%f", &grade);
            sum += grade;
        }
    }
    total_avg = (float) sum / (num_students * num_subjects);
    printf("The overall average grade for the class is: %.2f\n", total_avg);

    return 0;
}

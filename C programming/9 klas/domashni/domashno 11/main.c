#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    int grade;
} Subject;

typedef struct {
    char name[50];
    Subject* subjects;
    int num_subjects;
} Student;

Student* students;
int num_students = 0;
Subject* subjects;
int num_subjects = 0;

void add_student() {
        
}

void print_diary() {
}

int main() {
    printf("Enter the number of subjects: ");
    scanf("%d", &num_subjects);
    subjects = malloc(num_subjects * sizeof(Subject));
    for (int i = 0; i < num_subjects; i++) {
        printf("Enter the name of subject %d: ", i + 1);
        scanf("%s", subjects[i].name);
    }

    while (1) {
        printf("1. Add student\n2. Print diary\n3. Exit\n");
        int choice;
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                add_student();
                break;
            case 2:
                print_diary();
                break;
            case 3:
                free(students);
                free(subjects);
                return 0;
        }
    }
}
#include <stdio.h>
#include <stdlib.h>

typedef unsigned long long ull;
typedef ull (*func_ptr)(ull, ull);

ull add(ull a, ull b) {
    return a + b;
}

ull reduce(ull arr[], ull n, func_ptr f, ull init) {
    ull result = init;
    for (ull i = 0; i < n; i++) {
        result = f(result, arr[i]);
    }
    return result;
}

typedef enum { Monday = 1, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday } Weekday;

void print_day(Weekday day) {

    switch (day) {
        case Monday: printf("Monday\n"); break;
        case Tuesday: printf("Tuesday\n"); break;
        case Wednesday: printf("Wednesday\n"); break;
        case Thursday: printf("Thursday\n"); break;
        case Friday: printf("Friday\n"); break;
        case Saturday: printf("Saturday\n"); break;
        case Sunday: printf("Sunday\n"); break;
    }
}

typedef struct {
    char name[16];
    int number;
    double average_grade;
} Student;

Student* students = NULL;
int student_count = 0;

void add_student() {
    students = realloc(students, (student_count + 1) * sizeof(Student));
    printf("Enter student name: ");
    scanf(" %s[^\n]", students[student_count].name); 
    printf("Enter student number: ");
    scanf("%d", &students[student_count].number);
    printf("Enter student average grade: ");
    scanf("%lf", &students[student_count].average_grade);
    student_count++;
}

void print_students() {
    for (int i = 0; i < student_count; i++) {
        printf("Name: %s, Number: %d, Average grade: %.2f\n", students[i].name, students[i].number, students[i].average_grade);
    }
}

typedef union {
    long odd;
    short even;
} OddEven;

void print_odd_even(OddEven arr[], int n) {
    printf("Odd indices: ");
    for (int i = 0; i < n; i++) {
        if (i % 2 != 0) {
            printf("%ld ", arr[i].odd);
        }
    }
    printf("\nEven indices: ");
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            printf("%d ", arr[i].even);
        }
    }
    printf("\n");
}

int main() {
    ull arr[] = {1, 2, 3};
    printf("reduce(arr, 3, add, 0) = %llu\n", reduce(arr, 3, add, 0));

    Weekday day;
    printf("Enter a day number (1-7): ");
    scanf("%d", (int*)&day);
    print_day(day);

    int choice;
    do {
        printf("1. Add student\n2. Print students\n3. Exit\nEnter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: add_student(); break;
            case 2: print_students(); break;
        }
    } while (choice != 3);

    OddEven oe_arr[10];
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            oe_arr[i].even = i;
        } else {
            oe_arr[i].odd = i;
        }
    }
    print_odd_even(oe_arr, 10);

    free(students);
    return 0;
}
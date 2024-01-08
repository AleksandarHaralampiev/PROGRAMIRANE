#include <stdio.h>
#include <string.h>

int main() {
    printf("%-10s %-10s %-10s\n", "Name", "Surname", "Age");
    printf("%-10s %-10s %-10d\n", "Ivan", "Ivanov", 20);
    printf("%-10s %-10s %-10d\n", "Pesho", "Petrov", 21);
    printf("%-10s %-10s %-10d\n", "Gosho", "Georgiev", 22);

    char var[] = "Something";
    int total = 15;

    int padding = (15 - strlen(var)) / 2;
    printf("%*s\n", total, var);

    double a = 5.123456789;
    printf("A: %.2lf\n", a);
    return 0;
}

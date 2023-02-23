//input for a month and a year, and outputs the number of days in the given month
#include <stdio.h>

int main() {
    int month, year;
    printf("Enter a month and year (in two numbers): ");
    scanf("%d%d", &month, &year);

    int numDays;
    if (month == 2) {
        if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
            numDays = 29;
        } else {
            numDays = 28;
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        numDays = 30;
    } else {
        numDays = 31;
    }

    printf("The number of days in month %d of year %d is %d.\n", month, year, numDays);
    return 0;
}

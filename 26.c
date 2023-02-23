//print out the previous and the next date from a given date
#include <stdio.h>

int main() {
    int day, month, year;

    printf("Enter a date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);

    // check if the entered date is valid
    int maxDaysInMonth;
    if (month == 2) {
        if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
            maxDaysInMonth = 29;
        } else {
            maxDaysInMonth = 28;
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        maxDaysInMonth = 30;
    } else {
        maxDaysInMonth = 31;
    }

    if (year < 1 || month < 1 || month > 12 || day < 1 || day > maxDaysInMonth) {
        printf("Invalid date entered.\n");
        return 1;
    }

    // calculate the previous date
    int prevDay = day - 1;
    int prevMonth = month;
    int prevYear = year;
    if (prevDay == 0) {
        prevMonth -= 1;
        if (prevMonth == 0) {
            prevYear -= 1;
            prevMonth = 12;
        }
        if (prevMonth == 2) {
            if (prevYear % 4 == 0 && (prevYear % 100 != 0 || prevYear % 400 == 0)) {
                prevDay = 29;
            } else {
                prevDay = 28;
            }
        } else if (prevMonth == 4 || prevMonth == 6 || prevMonth == 9 || prevMonth == 11) {
            prevDay = 30;
        } else {
            prevDay = 31;
        }
    }

    // calculate the next date
    int nextDay = day + 1;
    int nextMonth = month;
    int nextYear = year;
    if (nextDay > maxDaysInMonth) {
        nextMonth += 1;
        if (nextMonth == 13) {
            nextYear += 1;
            nextMonth = 1;
        }
        if (nextMonth == 2) {
            if (nextYear % 4 == 0 && (nextYear % 100 != 0 || nextYear % 400 == 0)) {
                nextDay = 29;
            } else {
                nextDay = 28;
            }
        } else if (nextMonth == 4 || nextMonth == 6 || nextMonth == 9 || nextMonth == 11) {
            nextDay = 30;
        } else {
            nextDay = 31;   
        }
    }

    // output the results
    printf("The previous date is: %02d/%02d/%04d\n", prevDay, prevMonth, prevYear);
    printf("The next date is: %02d/%02d/%04d\n", nextDay, nextMonth, nextYear);

    return 0;
}

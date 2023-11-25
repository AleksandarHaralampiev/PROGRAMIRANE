//from a birth date to week day
#include <stdio.h>

int main() {
    int day, month, year;
    printf("Enter your date of birth (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);

    // Calculate the day of the week using Zeller's congruence
    int q = day;
    int m = (month <= 2) ? (month + 12) : month;
    int y = (month <= 2) ? (year - 1) : year;
    int k = y % 100;
    int j = y / 100;
    int h = (q + ((13 * (m + 1)) / 5) + k + (k / 4) + (j / 4) + (5 * j)) % 7;

    // Output the day of the week
    switch (h) {
        case 0:
            printf("You were born on a Saturday\n");
            break;
        case 1:
            printf("You were born on a Sunday\n");
            break;
        case 2:
            printf("You were born on a Monday\n");
            break;
        case 3:
            printf("You were born on a Tuesday\n");
            break;
        case 4:
            printf("You were born on a Wednesday\n");
            break;
        case 5:
            printf("You were born on a Thursday\n");
            break;
        case 6:
            printf("You were born on a Friday\n");
            break;
        default:
            printf("Error: invalid day of the week\n");
            break;
    }

    return 0;
}

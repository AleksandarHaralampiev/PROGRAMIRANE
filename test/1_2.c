//въвеждат се 3 цели числса - ден, месец и година и трябва да се определи кой пореден ден от годината е
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int day, month, year;
    int month_days;
    int visokosna = 0;
    int total = 0;
    int ok = 1;
    do {
        ok = 1;
        printf("\n----------------------");
        printf("\nEnter a day: ");
        scanf("%d", &day);
        printf("\nEnter a month: ");
        scanf("%d", &month);
        printf("\nEnter a year: ");
        scanf("%d", &year);
        if (year % 4 == 0 && year % 100 != 0)visokosna = 1;
        if(year % 100 == 0 && year % 400 == 0)visokosna = 1;

        switch(month) {
        case 1:month_days = 31;break;
        case 2:
            if(visokosna)month_days = 29;
            else month_days = 28;
            break;
        case 3:month_days=31;break;
        case 4:month_days=30;break;
        case 5:month_days=31;break;
        case 6:month_days = 30;break;
        case 7:month_days = 31;break;
        case 8:month_days = 31;break;
        case 9: month_days = 30;break;
        case 10:month_days = 31;break;
        case 11:month_days = 30;break;
        case 12:month_days=31;break;
    }

    if (year < 0 || month < 1 || month > 12 || day < 1 || day > month_days)ok=0;;
    }while(ok == 0);

    int curr_month = month;
    while(curr_month > 0) {
        switch(curr_month) {
        case 1:month_days = 31;break;
        case 2:
            if(visokosna)month_days = 29;
            else month_days = 28;
            break;
        case 3:month_days=31;break;
        case 4:month_days=30;break;
        case 5:month_days=31;break;
        case 6:month_days = 30;break;
        case 7:month_days = 31;break;
        case 8:month_days = 31;break;
        case 9: month_days = 30;break;
        case 10:month_days = 31;break;
        case 11:month_days = 30;break;
        case 12:month_days=31;break;
        }
        if(curr_month == month)total = total + day;
        else total = total + month_days;
        curr_month--;
    }
    printf("%d", total);
    return 0;
}
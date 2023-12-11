#include <stdio.h>

typedef struct {
    int day;
    int month;
    int year;
} Date;

int isLeapYear(int year) {
    return (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0));
}

int isValidDate(Date date) {
    if (date.month < 1 || date.month > 12) {
        return 0;
    }

    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (isLeapYear(date.year)) {
        daysInMonth[2] = 29; // assume leap year
    }

    if (date.day < 1 || date.day > daysInMonth[date.month]) {
        return 0;
    }

    return 1;
}

void printDate(Date date) {
    printf("Date: %d/%d/%d\n", date.day, date.month, date.year);
}

int main() {
    Date userDate;

    printf("Enter day, month, and year (dd mm yyyy): ");
    scanf("%d %d %d", &userDate.day, &userDate.month, &userDate.year);

    if (isValidDate(userDate)) {
        printf("Valid Date!\n");
        printDate(userDate);
    } else {
        printf("Invalid Date!\n");
    }

    return 0;
}

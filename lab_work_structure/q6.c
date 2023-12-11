#include <stdio.h>

typedef struct {
    int hours;
    int minutes;
    int seconds;
} Time;

void addTime(Time time1, Time time2) {
    int totalSeconds = time1.hours * 3600 + time1.minutes * 60 + time1.seconds +
                       time2.hours * 3600 + time2.minutes * 60 + time2.seconds;

    int hours = totalSeconds / 3600;
    int minutes = (totalSeconds % 3600) / 60;
    int seconds = totalSeconds % 60;

    printf("Addition Result: %d hours %d minutes %d seconds\n", hours, minutes, seconds);
}

void subtractTime(Time time1, Time time2) {
    int totalSeconds = time1.hours * 3600 + time1.minutes * 60 + time1.seconds -
                       (time2.hours * 3600 + time2.minutes * 60 + time2.seconds);

    if (totalSeconds < 0) {
        printf("Subtraction Result: Time cannot be negative.\n");
        return;
    }

    int hours = totalSeconds / 3600;
    int minutes = (totalSeconds % 3600) / 60;
    int seconds = totalSeconds % 60;

    printf("Subtraction Result: %d hours %d minutes %d seconds\n", hours, minutes, seconds);
}

int main() {
    Time time1 = {10, 20, 50};
    Time time2 = {5, 30, 40};

    addTime(time1, time2);
    subtractTime(time1, time2);

    return 0;
}

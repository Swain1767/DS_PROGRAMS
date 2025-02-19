#include <stdio.h>

void convertTo12HourFormat(int hour, int minute) {
    char period[3] = "AM";

    if (hour >= 12) {
        period[0] = 'P';
        if (hour > 12) hour -= 12;
    }
    if (hour == 0) hour = 12; 

    printf("Time in 12-hour format: %02d:%02d %s\n", hour, minute, period);
}

int main() {
    int hour, minute;

    printf("Enter time (24-hour format) in HH MM: ");
    scanf("%d %d", &hour, &minute);

    convertTo12HourFormat(hour, minute);

    return 0;
}

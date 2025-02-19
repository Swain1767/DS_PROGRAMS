#include <stdio.h>
#include <time.h>

int main() {
    struct tm date = {0};
    date.tm_year = 2025 - 1900;  // Year is from 1900
    date.tm_mday = 1;  // Starting from January 1st

    for (int month = 0; month < 12; month++) {
        date.tm_mon = month;

        mktime(&date);  // Normalize date

        printf("Month %02d: %s", month + 1, asctime(&date));
    }

    return 0;
}

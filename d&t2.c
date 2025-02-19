#include <stdio.h>
#include <time.h>

int main() {
    time_t t;
    struct tm *tm_info;

    time(&t);
    tm_info = localtime(&t);

    printf("Current time: %.2d:%.2d:%.2d\n", tm_info->tm_hour, tm_info->tm_min, tm_info->tm_sec);

    return 0;
}

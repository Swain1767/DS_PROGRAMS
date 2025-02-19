#include <stdio.h>
#include <time.h>

int main() {
    time_t t;
    struct tm *tm_info;
    char buffer[80];

    time(&t);
    tm_info = gmtime(&t);  // Get the GMT (Greenwich Mean Time)

    strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", tm_info);
    printf("Current GMT: %s\n", buffer);

    return 0;
}

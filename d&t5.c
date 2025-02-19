#include <stdio.h>

void maximizeTime(char time[]) {
    if (time[0] == '_') time[0] = '2';
    if (time[1] == '_') time[1] = '3';
    if (time[3] == '_') time[3] = '5';
    if (time[4] == '_') time[4] = '9';

    printf("Maximized Time: %s\n", time);
}

int main() {
    char time[6];

    printf("Enter time in 24-hour format (XX:XX) with '_': ");
    scanf("%s", time);

    maximizeTime(time);

    return 0;
}

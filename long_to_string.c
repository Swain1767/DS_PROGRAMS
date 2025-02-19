#include <stdio.h>

void longToString(long num, char* str) {
    sprintf(str, "%ld", num);
}

int main() {
    long longNum;
    char str[100];

    printf("Enter a long number: ");
    scanf("%ld", &longNum);

    longToString(longNum, str);

    printf("Long as string: %s\n", str);

    return 0;
}

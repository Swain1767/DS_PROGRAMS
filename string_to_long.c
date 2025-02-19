#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[100];
    long longNum;

    printf("Enter a string representing a number: ");
    scanf("%s", str);

    longNum = strtol(str, NULL, 10);

    printf("String converted to long: %ld\n", longNum);

    return 0;
}

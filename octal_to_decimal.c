#include <stdio.h>
#include <stdlib.h>

int main() {
    char octalStr[100];
    int decimal;

    printf("Enter an octal number: ");
    scanf("%s", octalStr);

    decimal = strtol(octalStr, NULL, 8);

    printf("Octal %s converted to decimal: %d\n", octalStr, decimal);

    return 0;
}

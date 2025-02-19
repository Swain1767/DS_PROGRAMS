#include <stdio.h>
#include <stdlib.h>

int main() {
    char hexStr[100];
    int decimal;

    printf("Enter a hexadecimal number: ");
    scanf("%s", hexStr);

    decimal = strtol(hexStr, NULL, 16);  

    printf("Hexadecimal %s converted to decimal: %d\n", hexStr, decimal);

    return 0;
}

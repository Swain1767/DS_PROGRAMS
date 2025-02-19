#include <stdio.h>

void decimalToOctal(int decimal) {
    int octal[50], i = 0;

    while (decimal != 0) {
        octal[i] = decimal % 8;
        decimal = decimal / 8;
        i++;
    }

    printf("Decimal converted to octal: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", octal[j]);
    printf("\n");
}

int main() {
    int decimal;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    decimalToOctal(decimal);

    return 0;
}

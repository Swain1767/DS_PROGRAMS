#include <stdio.h>

void decimalToHexadecimal(int decimal) {
    char hex[50];
    int i = 0;

    while (decimal != 0) {
        int temp = decimal % 16;
        if (temp < 10)
            hex[i] = temp + 48;  // ASCII value of '0' is 48
        else
            hex[i] = temp + 87;  // ASCII value of 'a' is 97, 'a' starts from 10
        decimal = decimal / 16;
        i++;
    }

    printf("Decimal converted to hexadecimal: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%c", hex[j]);
    printf("\n");
}

int main() {
    int decimal;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    decimalToHexadecimal(decimal);

    return 0;
}

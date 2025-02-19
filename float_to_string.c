#include <stdio.h>

void floatToString(float num, char* str) {
    sprintf(str, "%f", num);
}

int main() {
    float floatNum;
    char str[100];

    printf("Enter a float number: ");
    scanf("%f", &floatNum);

    floatToString(floatNum, str);

    printf("Float as string: %s\n", str);

    return 0;
}

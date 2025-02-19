#include <stdio.h>

void doubleToString(double num, char* str) {
    sprintf(str, "%lf", num);
}

int main() {
    double doubleNum;
    char str[100];

    printf("Enter a double number: ");
    scanf("%lf", &doubleNum);

    doubleToString(doubleNum, str);

    printf("Double as string: %s\n", str);

    return 0;
}

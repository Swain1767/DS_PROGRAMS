#include <stdio.h>

void intToChar(int num, char* ch) {
    *ch = (char)num;
}

int main() {
    int num;
    char ch;

    printf("Enter an integer: ");
    scanf("%d", &num);

    intToChar(num, &ch);

    printf("Integer converted to char: %c\n", ch);

    return 0;
}

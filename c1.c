#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

   
    if (num2 == 0) {
        printf("Error: Division by zero.\n");
    } else {
        printf("Quotient: %d\n", num1 / num2);
    }

    return 0;
}

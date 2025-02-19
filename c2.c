#include <stdio.h>

int main() {
  
    int num = 5, divisor = 0;
    if (divisor == 0) {
        printf("Runtime Error: Division by zero.\n");
    } else {
        printf("Result: %d\n", num / divisor);
    }

    int result = 5 + 10 * 2;  
    printf("Logical Error result: %d\n", result);  

    return 0;
}

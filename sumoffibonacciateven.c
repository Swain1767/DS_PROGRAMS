#include <stdio.h>

int main() {
    int n, i;
    int first = 0, second = 1, next;
    int sum = 0;

   
    printf("Enter the number of terms (N): ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 0; i < n; i++) {
        if (i == 0) {
            next = first;
        } else if (i == 1) {
            next = second;
        } else {
            next = first + second;
            first = second;
            second = next;
        }

        printf("%d ", next);

        if (i % 2 == 0) { 
            sum += next;
        }
    }

    printf("\nSum of Fibonacci numbers at even indexes: %d\n", sum);

    return 0;
}

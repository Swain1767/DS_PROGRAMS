#include <stdio.h>

int main() {
    int lower, upper, i, j, isPrime;


    printf("Enter lower bound: ");
    scanf("%d", &lower);
    printf("Enter upper bound: ");
    scanf("%d", &upper);

    printf("Prime numbers between %d and %d are:\n", lower, upper);

  
    for (i = lower; i <= upper; i++) {
        if (i < 2)  
            continue;

        isPrime = 1;

        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break; 
            }
        }

        if (isPrime) { 
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}

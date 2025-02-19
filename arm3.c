#include <stdio.h>
#include <math.h>


int isArmstrong(int num) {
    int originalNum = num, remainder, result = 0, n = 0;

    
    while (originalNum != 0) {
        originalNum /= 10;
        n++;
    }

    originalNum = num;

    
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += (int)pow(remainder, n);  
        originalNum /= 10;
    }

    return (result == num);  
}

int main() {
    int lower, upper, i;

    
    printf("Enter lower bound: ");
    scanf("%d", &lower);
    printf("Enter upper bound: ");
    scanf("%d", &upper);

    printf("Armstrong numbers between %d and %d are:\n", lower, upper);

    
    for (i = lower; i <= upper; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }
    
    printf("\n");
    return 0;
}



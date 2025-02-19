#include <stdio.h>
#include <math.h>

int main() {
    double p, r, t, amount;

    printf("Enter principal: ");
    scanf("%lf", &p); 

    printf("Enter rate: ");
    scanf("%lf", &r); 
    printf("Enter time: ");
    scanf("%lf", &t);  

    amount = p * pow((1 + r / 100), t);  
    
    double CI = amount - p;

    printf("Compound Interest is: %lf\n", CI); 

    return 0;
}

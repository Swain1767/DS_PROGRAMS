#include<stdio.h>
int main(){
    float fahr,cel;
    printf("enter fahrenheit:");
    scanf("%f",&fahr);

    cel = (fahr - 32)*5/9;
   printf("Celsius: %f ", cel);
}
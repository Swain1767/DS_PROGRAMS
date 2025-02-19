#include<stdio.h>
int main(){
    //  float P = 1, R = 1, T = 1;
    //     float SI = (P * T * R) / 100;
    //       printf("Simple Interest = %f\n", SI);

    float p,r,t;
    printf("enter principal:");
    scanf("%f",&p);
    printf("enter rate:");
    scanf("%f",&r);
    printf("enter time:");
    scanf("%f",&t);

    float SI = (p * t * r) / 100;
     printf("Simple Interest = %f\n", SI);

}
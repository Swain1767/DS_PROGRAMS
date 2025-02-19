#include<stdio.h>
int main()
{
    int year;
    printf("enter a year:");
    scanf("%d",&year);

    if(year%400==0)
    {
        printf("leap year");
    }
    else if(year%4==0 && year%100!=0)
    {
        printf(" a leap year");
    }
   else{
    printf("not a leap year");
   }
}
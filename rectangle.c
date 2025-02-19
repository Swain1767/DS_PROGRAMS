#include<stdio.h>
int main()
{
    int length,bredth,area,perimeter;
    printf("enter length:");
    scanf("%d",&length);
    printf("enter bredth:");
    scanf("%d",&bredth);

    area=length*bredth;
    perimeter=2*(length+bredth);

printf("area of rectange is:%d\n",area);
printf("perimeter of rectange is:%d",perimeter);
}
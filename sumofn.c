#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enter nth number:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("sum of %d number is %d",n,sum);
}
#include<stdio.h>
int main(){
    int a=5,b=8,temp;
   
    temp=a;
    a=b;
    b=temp;

    printf("after swapping a=%d and b=%d",a,b);
}
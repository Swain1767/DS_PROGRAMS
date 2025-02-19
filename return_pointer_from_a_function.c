#include <stdio.h>

int* returnPointer() {
    static int num = 10;  
    return &num;
}

int main() {
    int* ptr = returnPointer();
    printf("Value returned by pointer: %d\n", *ptr);
    return 0;
}

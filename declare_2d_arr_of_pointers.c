#include <stdio.h>

int main() {
   
    int* arr[3][3];
    
    int a = 1, b = 2, c = 3;
    int x = 4, y = 5, z = 6;
    int m = 7, n = 8, o = 9;
    
    arr[0][0] = &a; arr[0][1] = &b; arr[0][2] = &c;
    arr[1][0] = &x; arr[1][1] = &y; arr[1][2] = &z;
    arr[2][0] = &m; arr[2][1] = &n; arr[2][2] = &o;

    printf("arr[0][0] = %d\n", *arr[0][0]);
    printf("arr[1][1] = %d\n", *arr[1][1]);
    printf("arr[2][2] = %d\n", *arr[2][2]);

    return 0;
}

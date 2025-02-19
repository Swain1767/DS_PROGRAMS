#include <stdio.h>

int findLargest(int* arr, int size) {
    int largest = *arr;
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > largest)
            largest = *(arr + i);
    }
    return largest;
}

int main() {
    int arr[] = {12, 56, 23, 89, 45};
    int size = sizeof(arr) / sizeof(arr[0]);
    int largest = findLargest(arr, size);
    printf("Largest element is: %d\n", largest);
    return 0;
}

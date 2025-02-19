#include <stdio.h>
int removeOccurrences(int arr[], int n, int key) {
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != key) {
            arr[j++] = arr[i];
        }
    }
    return j;
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, key;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to remove: ");
    scanf("%d", &key);

    n = removeOccurrences(arr, n, key);

    printf("Array after removing occurrences: ");
    printArray(arr, n);

    return 0;
}

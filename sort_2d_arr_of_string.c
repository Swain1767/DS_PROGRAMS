#include <stdio.h>
#include <string.h>

void sortStrings(char* arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (strcmp(arr[i], arr[j]) > 0) {
                char* temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    char* arr[] = {"Banana", "Apple", "Cherry", "Date"};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    sortStrings(arr, size);

    printf("Sorted strings: ");
    for (int i = 0; i < size; i++) {
        printf("%s ", arr[i]);
    }
    printf("\n");

    return 0;
}

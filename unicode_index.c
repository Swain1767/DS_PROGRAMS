#include <stdio.h>

int getUnicodeCodePoint(char str[], int index) {
    return (int)str[index];
}

int main() {
    char str[100];
    int index;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter index: ");
    scanf("%d", &index);

    if (index >= 0 && index < strlen(str)) {
        int codePoint = getUnicodeCodePoint(str, index);
        printf("Unicode Code Point at index %d: %d\n", index, codePoint);
    } else {
        printf("Index out of bounds!\n");
    }

    return 0;
}

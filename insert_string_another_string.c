#include <stdio.h>
#include <string.h>

void insertString(char str1[], char str2[], int pos) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    for (int i = len1 - 1; i >= pos; i--)
        str1[i + len2] = str1[i];

    for (int i = 0; i < len2; i++)
        str1[pos + i] = str2[i];
}

int main() {
    char str1[100], str2[100];
    int pos;

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string to insert: ");
    scanf("%s", str2);

    printf("Enter position to insert: ");
    scanf("%d", &pos);

    insertString(str1, str2, pos);

    printf("Updated string: %s\n", str1);

    return 0;
}

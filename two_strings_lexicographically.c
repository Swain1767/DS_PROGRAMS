#include <stdio.h>
#include <string.h>

int compareLexicographically(char str1[], char str2[]) {
    return strcmp(str1, str2);
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    int result = compareLexicographically(str1, str2);
    if (result == 0)
        printf("The strings are lexicographically equal.\n");
    else if (result < 0)
        printf("The first string is lexicographically smaller.\n");
    else
        printf("The first string is lexicographically greater.\n");

    return 0;
}

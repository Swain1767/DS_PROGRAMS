#include <stdio.h>
#include <string.h>

void splitString(char str[], char delimiter) {
    char *token = strtok(str, &delimiter);

    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, &delimiter);
    }
}

int main() {
    char str[100];
    char delimiter;

    printf("Enter a string: ");
    gets(str);

    printf("Enter delimiter character: ");
    scanf("%c", &delimiter);

    printf("Sub-strings are:\n");
    splitString(str, delimiter);

    return 0;
}

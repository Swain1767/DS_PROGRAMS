#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isPangram(char str[]) {
    int alphabet[26] = {0};

    for (int i = 0; str[i]; i++) {
        if (isalpha(str[i])) {
            int index = tolower(str[i]) - 'a';
            alphabet[index] = 1;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (alphabet[i] == 0)
            return 0;
    }

    return 1;
}

int main() {
    char str[1000];

    printf("Enter a string: ");
    gets(str);  

    if (isPangram(str))
        printf("The string is a pangram.\n");
    else
        printf("The string is not a pangram.\n");

    return 0;
}

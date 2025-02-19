#include <stdio.h>
#include <ctype.h>

void printFirstLetters(char str[]) {
    int flag = 1;  

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i]) && flag) {
            printf("%c ", str[i]);
            flag = 0;
        }
        if (str[i] == ' ') 
            flag = 1; 
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);

    printf("First letters of each word: ");
    printFirstLetters(str);
    printf("\n");

    return 0;
}

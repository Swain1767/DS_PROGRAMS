#include <stdio.h>

int charToInt(char ch) {
    return (int)ch;
}

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch); 

    int intVal = charToInt(ch);

    printf("Character converted to integer: %d\n", intVal);

    return 0;
}

#include <stdio.h>
#include <string.h>

char firstNonRepeatingChar(char str[]) {
    int freq[256] = {0};  

    for (int i = 0; str[i]; i++) 
        freq[(int)str[i]]++;

    for (int i = 0; str[i]; i++) {
        if (freq[(int)str[i]] == 1) 
            return str[i];
    }
    return '\0'; 
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    char result = firstNonRepeatingChar(str);

    if (result) 
        printf("First non-repeating character: %c\n", result);
    else 
        printf("No non-repeating character found.\n");

    return 0;
}

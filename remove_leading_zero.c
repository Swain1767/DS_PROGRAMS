#include <stdio.h>
#include <string.h>

void removeLeadingZeros(char str[]) {
    int i = 0;
 
    while (str[i] == '0' && str[i] != '\0')
        i++;

    if (i == strlen(str))
        printf("0");
    else
        printf("%s", &str[i]);
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("String without leading zeros: ");
    removeLeadingZeros(str);
    printf("\n");

    return 0;
}

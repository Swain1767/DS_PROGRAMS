#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Length of the string: %d\n", (int)strlen(str));

    return 0;
}

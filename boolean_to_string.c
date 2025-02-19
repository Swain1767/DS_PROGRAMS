#include <stdio.h>
#include <stdbool.h>

void booleanToString(bool value, char* str) {
    if (value)
        strcpy(str, "true");
    else
        strcpy(str, "false");
}

int main() {
    bool boolVal;
    char str[10];

    printf("Enter boolean value (0 or 1): ");
    scanf("%d", &boolVal);

    booleanToString(boolVal, str);

    printf("Boolean as string: %s\n", str);

    return 0;
}

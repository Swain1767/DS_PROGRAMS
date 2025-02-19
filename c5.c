#include <stdio.h>

int main() {
    char name[100];
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    printf("Initials: ");
    printf("%c", name[0]);  
    for (int i = 1; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            printf("%c", name[i + 1]);
        }
    }
    printf("\n");

    return 0;
}

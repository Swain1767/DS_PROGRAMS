#include <stdio.h>

int main() {
    FILE *sourceFile = fopen("source.txt", "r");
    FILE *destFile = fopen("destination.txt", "w");

    if (sourceFile == NULL || destFile == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    char buffer[1024];
    while (fgets(buffer, sizeof(buffer), sourceFile)) {
        fputs(buffer, destFile);
    }

    printf("Content copied successfully.\n");

    fclose(sourceFile);
    fclose(destFile);

    return 0;
}

#include <stdio.h>

int main() {
    FILE *sourceFile = fopen("source.txt", "rb");
    FILE *destFile = fopen("destination.txt", "wb");

    if (sourceFile == NULL || destFile == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    char buffer[1024];
    size_t bytesRead;
    while ((bytesRead = fread(buffer, 1, sizeof(buffer), sourceFile)) > 0) {
        fwrite(buffer, 1, bytesRead, destFile);
    }

    printf("File copied successfully.\n");

    fclose(sourceFile);
    fclose(destFile);

    return 0;
}

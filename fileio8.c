#include <stdio.h>

int main() {
    FILE *file1 = fopen("source.txt", "rb");
    FILE *file2 = fopen("destination.txt", "ab");

    if (file1 == NULL || file2 == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    char buffer[1024];
    size_t bytesRead;
    while ((bytesRead = fread(buffer, 1, sizeof(buffer), file1)) > 0) {
        fwrite(buffer, 1, bytesRead, file2);
    }

    printf("Content appended successfully.\n");

    fclose(file1);
    fclose(file2);

    return 0;
}

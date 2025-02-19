#include <stdio.h>

int main() {
    FILE *tempFile;
    tempFile = tmpfile();  

    if (tempFile == NULL) {
        printf("Unable to create temporary file.\n");
        return 1;
    }

    fprintf(tempFile, "This is a temporary file.\n");

    rewind(tempFile);

    char buffer[100];
    fgets(buffer, sizeof(buffer), tempFile);
    printf("Content of temporary file: %s", buffer);

    fclose(tempFile);

    return 0;
}

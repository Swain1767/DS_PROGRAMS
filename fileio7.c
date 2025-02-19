#include <stdio.h>
#include <string.h>

int main() {
    FILE *file = fopen("text.txt", "r");
    char pattern[] = "pattern";  
    char buffer[256];

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        if (strstr(buffer, pattern) != NULL) {
            printf("Matching line: %s", buffer);
        }
    }

    fclose(file);

    return 0;
}

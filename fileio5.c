#include <stdio.h>

int compareFiles(FILE *file1, FILE *file2) {
    char ch1, ch2;
    while ((ch1 = fgetc(file1)) != EOF && (ch2 = fgetc(file2)) != EOF) {
        if (ch1 != ch2) {
            return 0;  
        }
    }
    if (ch1 != ch2) {
        return 0;  
    }
    return 1;  
}

int main() {
    FILE *file1 = fopen("file1.txt", "r");
    FILE *file2 = fopen("file2.txt", "r");

    if (file1 == NULL || file2 == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    if (compareFiles(file1, file2)) {
        printf("Files are identical.\n");
    } else {
        printf("Files are different.\n");
    }

    fclose(file1);
    fclose(file2);

    return 0;
}

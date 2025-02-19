#include <stdio.h>

int main() {
    if (rename("oldfile.txt", "newfile.txt") == 0) {
        printf("File renamed successfully.\n");
    } else {
        printf("Error renaming the file.\n");
    }
    return 0;
}

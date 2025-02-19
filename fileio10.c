#include <stdio.h>
#include <zip.h>

int main() {
    int err = 0;
    zip_t *zip = zip_open("archive.zip", 0, &err);
    if (zip == NULL) {
        printf("Error opening zip file.\n");
        return 1;
    }

    zip_int64_t numFiles = zip_get_num_entries(zip, 0);
    for (zip_int64_t i = 0; i < numFiles; i++) {
        const char *filename = zip_get_name(zip, i, 0);
        printf("File %d: %s\n", i + 1, filename);

        zip_file_t *file = zip_fopen(zip, filename, 0);
        if (file == NULL) {
            printf("Error opening file %s in zip.\n", filename);
            continue;
        }

        char buffer[1024];
        zip_int64_t bytesRead;
        while ((bytesRead = zip_fread(file, buffer, sizeof(buffer))) > 0) {
            fwrite(buffer, 1, bytesRead, stdout);
        }
        zip_fclose(file);
    }

    zip_close(zip);
    return 0;
}

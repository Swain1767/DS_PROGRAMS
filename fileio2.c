#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    struct Student student1 = {1, "John Doe", 85.5};

    FILE *file = fopen("student.dat", "wb");
    if (file == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }
    fwrite(&student1, sizeof(struct Student), 1, file);
    fclose(file);

    file = fopen("student.dat", "rb");
    if (file == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }
    fread(&student1, sizeof(struct Student), 1, file);
    fclose(file);

    printf("\nRead Data from File:\n");
    printf("Roll Number: %d\n", student1.rollNo);
    printf("Name: %s", student1.name);
    printf("Marks: %.2f\n", student1.marks);

    return 0;
}

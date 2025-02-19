#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    struct Student student1;

    printf("Enter student roll number: ");
    scanf("%d", &student1.rollNo);

    printf("Enter student name: ");
    getchar();  
    fgets(student1.name, sizeof(student1.name), stdin);

    printf("Enter student marks: ");
    scanf("%f", &student1.marks);

    printf("\nStudent Information:\n");
    printf("Roll Number: %d\n", student1.rollNo);
    printf("Name: %s", student1.name);  
    printf("Marks: %.2f\n", student1.marks);

    return 0;
}

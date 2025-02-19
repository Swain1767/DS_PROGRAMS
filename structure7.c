#include <stdio.h>
#include <stdlib.h>

struct Student {
    int rollNo;
    char name[50];
    int marks[];
};

int main() {
    struct Student* student;
    int n = 3;
    
   
    student = (struct Student*)malloc(sizeof(struct Student) + n * sizeof(int));

    printf("Enter roll number: ");
    scanf("%d", &student->rollNo);
    getchar(); 
    printf("Enter name: ");
    fgets(student->name, sizeof(student->name), stdin);
  
    printf("Enter marks: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &student->marks[i]);
    }

    printf("\nStudent Information:\n");
    printf("Roll Number: %d\n", student->rollNo);
    printf("Name: %s", student->name);
    printf("Marks: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", student->marks[i]);
    }
    printf("\n");

    free(student);

    return 0;
}

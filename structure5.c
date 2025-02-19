#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    int age;
};

void sortByAge(struct Student students[], int n) {
    struct Student temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (students[i].age > students[j].age) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}

int main() {
    struct Student students[3];

    for (int i = 0; i < 3; i++) {
        printf("\nEnter student %d details:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNo);
        getchar();  
        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        printf("Age: ");
        scanf("%d", &students[i].age);
    }

    sortByAge(students, 3);

    printf("\nSorted Student Records by Age:\n");
    for (int i = 0; i < 3; i++) {
        printf("Roll Number: %d\n", students[i].rollNo);
        printf("Name: %s", students[i].name);
        printf("Age: %d\n", students[i].age);
    }

    return 0;
}

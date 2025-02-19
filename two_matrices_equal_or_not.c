#include <stdio.h>
int areMatricesEqual(int mat1[][100], int mat2[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (mat1[i][j] != mat2[i][j]) {
                return 0; 
            }
        }
    }
    return 1; 
}

int main() {
    int rows, cols;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int mat1[100][100], mat2[100][100];

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    if (areMatricesEqual(mat1, mat2, rows, cols)) {
        printf("Matrices are equal.\n");
    } else {
        printf("Matrices are not equal.\n");
    }

    return 0;
}

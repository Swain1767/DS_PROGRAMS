#include <stdio.h>
int determinant2x2(int mat[2][2]) {
    return (mat[0][0] * mat[1][1]) - (mat[0][1] * mat[1][0]);
}

int determinant3x3(int mat[3][3]) {
    int det = mat[0][0] * ((mat[1][1] * mat[2][2]) - (mat[1][2] * mat[2][1])) -
              mat[0][1] * ((mat[1][0] * mat[2][2]) - (mat[1][2] * mat[2][0])) +
              mat[0][2] * ((mat[1][0] * mat[2][1]) - (mat[1][1] * mat[2][0]));
    return det;
}

int main() {
    int n;
    printf("Enter the order of the matrix (2 or 3): ");
    scanf("%d", &n);

    if (n == 2) {
        int mat[2][2];
        printf("Enter elements of 2x2 matrix:\n");
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                scanf("%d", &mat[i][j]);

        printf("Determinant = %d\n", determinant2x2(mat));
    } 
    else if (n == 3) {
        int mat[3][3];
        printf("Enter elements of 3x3 matrix:\n");
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                scanf("%d", &mat[i][j]);

        printf("Determinant = %d\n", determinant3x3(mat));
    } 
    else {
        printf("Only 2x2 and 3x3 matrices are supported.\n");
    }

    return 0;
}

#include <stdio.h>

#define N 3
#define M 3

void swapColumns(int mat[N][M]) {
    for (int i = 0; i < N; i++) {
        int temp = mat[i][0];
        mat[i][0] = mat[i][M - 1];
        mat[i][M - 1] = temp;
    }
}

void printMatrix(int mat[N][M]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat[N][M] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Original Matrix:\n");
    printMatrix(mat);

    swapColumns(mat);

    printf("\nMatrix after swapping first and last column:\n");
    printMatrix(mat);

    return 0;
}

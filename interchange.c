#include <stdio.h>

#define N 3
#define M 3

void swapRows(int mat[N][M]) {
    for (int j = 0; j < M; j++) {
        int temp = mat[0][j];
        mat[0][j] = mat[N - 1][j];
        mat[N - 1][j] = temp;
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

    swapRows(mat);

    printf("\nMatrix after swapping first and last row:\n");
    printMatrix(mat);

    return 0;
}

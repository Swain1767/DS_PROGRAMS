#include <stdio.h>

#define N 3

int sumOfDiagonals(int mat[N][N]) {
    int sum = 0;

    for (int i = 0; i < N; i++) {
        sum += mat[i][i]; 
        if (i != (N - i - 1)) {
            sum += mat[i][N - i - 1];
        }
    }

    return sum;
}

void printMatrix(int mat[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat[N][N] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Matrix:\n");
    printMatrix(mat);

    int sum = sumOfDiagonals(mat);
    printf("\nSum of diagonals: %d\n", sum);

    return 0;
}

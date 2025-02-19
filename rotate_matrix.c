#include <stdio.h>

#define N 4
#define M 4

void rotateMatrix(int mat[N][M]) {
    int top = 0, bottom = N - 1, left = 0, right = M - 1;
    int prev, curr;

    while (top < bottom && left < right) {
        prev = mat[top + 1][left];

        for (int i = left; i <= right; i++) {
            curr = mat[top][i];
            mat[top][i] = prev;
            prev = curr;
        }
        top++;

        for (int i = top; i <= bottom; i++) {
            curr = mat[i][right];
            mat[i][right] = prev;
            prev = curr;
        }
        right--;

        for (int i = right; i >= left; i--) {
            curr = mat[bottom][i];
            mat[bottom][i] = prev;
            prev = curr;
        }
        bottom--;

        for (int i = bottom; i >= top; i--) {
            curr = mat[i][left];
            mat[i][left] = prev;
            prev = curr;
        }
        left++;
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
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9,  10, 11, 12},
        {13, 14, 15, 16}
    };

    printf("Original Matrix:\n");
    printMatrix(mat);

    rotateMatrix(mat);

    printf("\nRotated Matrix:\n");
    printMatrix(mat);

    return 0;
}

#include <stdio.h>
#include <math.h>

void findNormalAndTrace(int mat[][100], int n) {
    int trace = 0;
    double normal = 0.0;

    for (int i = 0; i < n; i++) {
        trace += mat[i][i]; 
        for (int j = 0; j < n; j++) {
            normal += mat[i][j] * mat[i][j]; 
        }
    }
    
    normal = sqrt(normal);

    printf("Trace of the matrix = %d\n", trace);
    printf("Normal of the matrix = %.2lf\n", normal);
}

int main() {
    int n;
    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    int mat[100][100];
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    findNormalAndTrace(mat, n);

    return 0;
}

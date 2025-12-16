#include <stdio.h>

int main() {
    int r, c;
    int mat1[10][10], mat2[10][10], sum[10][10];

    // Input number of rows and columns
    scanf("%d %d", &r, &c);

    // Input first matrix
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &mat1[i][j]);

    // Input second matrix
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &mat2[i][j]);

    // Add matrices
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            sum[i][j] = mat1[i][j] + mat2[i][j];

    // Print sum matrix
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }

    return 0;
}


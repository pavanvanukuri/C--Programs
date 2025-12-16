#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c], b[r][c], result[r][c];

    // Read first 2D array
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    // Read second 2D array
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &b[i][j]);

    // Element-wise multiplication
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            result[i][j] = a[i][j] * b[i][j];

    // Print result
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            printf("%d", result[i][j]);
            if(j != c-1) printf(" ");
        }
        printf("\n");
    }

    return 0;
}


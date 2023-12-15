#include <stdio.h>
#include "matrix_basics.h"

int matrix_input(int m, int n, int matrix[m][n])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter number at row %d, column %d : ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
        printf("---------------------------\n");
    }
    return 0;
}
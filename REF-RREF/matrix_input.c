#include <stdio.h>
#include <conio.h>
#include "matrix.h"

int matrix_input(int m, int n, float matrix[m][n])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter element at Row %d, Column %d: ", i + 1, j + 1);
            scanf("%f", &matrix[i][j]);
        }
        printf("----------------------\n");
    }
    return 0;
}
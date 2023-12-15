#include <stdio.h>
#include <conio.h>
#include "matrix.h"

int matrix_output(int m, int n, float matrix[m][n])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%.2f\t ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
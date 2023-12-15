#include <stdio.h>
#include "matrix_functions_and_operations.h"

// Function for taking values of matrix

int matrix_input(int m, int n, float matrix[m][n])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter element at Row %d, Column %d : ", i + 1, j + 1);
            scanf("%f", &matrix[i][j]);
        }
        printf("=========================================\n");
    }
    return 0;
}

// Function for displaying matrix

int matrix_output(int m, int n, float matrix[m][n])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%.2f\t", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
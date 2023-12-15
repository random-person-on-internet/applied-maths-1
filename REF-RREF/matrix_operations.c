#include <stdio.h>
#include <conio.h>
#include "matrix.h"
#include "matrix_operations.h"

//-----------------------------------------------------------------------
// row swap
int row_swap(int destinationRow, int sourceRow, int m, int n, float matrix[m][n])
{
    float temp;

    for (int i = 0; i < n; i++)
    {
        temp = matrix[destinationRow - 1][i];
        matrix[destinationRow - 1][i] = matrix[sourceRow - 1][i];
        matrix[sourceRow - 1][i] = temp;
    }

    printf("\nRow %d <--> %d\n", destinationRow, sourceRow);
    matrix_output(m, n, matrix);
    return 0;
}
//-----------------------------------------------------------------------
// row multiplication
int row_multiplication(int destinationRow, float multiplier, int m, int n, float matrix[m][n])
{
    for (int i = 0; i < n; i++)
    {
        matrix[destinationRow - 1][i] = matrix[destinationRow - 1][i] * multiplier;
    }

    printf("\nRow %d X %.2f\n", destinationRow, multiplier);
    matrix_output(m, n, matrix);
    return 0;
}
//-----------------------------------------------------------------------
// row division
int row_division(int destinationRow, float divider, int m, int n, float matrix[m][n])
{
    for (int i = 0; i < n; i++)
    {
        matrix[destinationRow - 1][i] = matrix[destinationRow - 1][i] / divider;
    }

    printf("\nRow %d / %.2f\n", destinationRow, divider);
    matrix_output(m, n, matrix);
    return 0;
}
//-----------------------------------------------------------------------
// row subtraction
int row_subtraction(int destinationRow, int sourceRow, float multiplier, int m, int n, float matrix[m][n])
{
    for (int i = 0; i < n; i++)
    {
        matrix[destinationRow - 1][i] = matrix[destinationRow - 1][i] - (matrix[sourceRow - 1][i] * multiplier);
    }

    printf("\nRow %d - %.2f X Row %d\n", destinationRow, multiplier, sourceRow);
    matrix_output(m, n, matrix);
    return 0;
}
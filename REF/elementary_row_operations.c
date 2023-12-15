#include <stdio.h>
#include "matrix_functions_and_operations.h"

// Row exchange

int row_exchange(int m, int n, float matrix[m][n], int dest, int tar)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        temp = matrix[dest - 1][i];
        matrix[dest - 1][i] = matrix[tar - 1][i];
        matrix[tar - 1][i] = temp;
    }

    // Show result :

    printf("R %d <-> %d : \n", dest, tar);
    matrix_output(m, n, matrix);
    return 0;
}
//==================================================================================
// Row subtraction

int row_subtraction(int m, int n, float matrix[m][n], int target_row, int source_row, float multiplier)
{
    for (int i = 0; i < n; i++)
    {
        matrix[target_row - 1][i] -= matrix[source_row - 1][i] * multiplier;
    }

    // Print result

    matrix_output(m, n, matrix);
    return 0;
}
//==================================================================================
// Row division

int row_division(int m, int n, float matrix[m][n], int target_row, float divider)
{
    for (int i = 0; i < n; i++)
    {
        matrix[target_row - 1][i] /= divider;
    }

    // Print result

    matrix_output(m, n, matrix);
    return 0;
}
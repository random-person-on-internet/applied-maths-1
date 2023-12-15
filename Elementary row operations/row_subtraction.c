#include <stdio.h>
#include "matrix_basics.h"

int main()
{
    int m, n;

    // Take dimensions for matrix

    printf("Enter number of rows in matrix : ");
    scanf("%d", &m);
    printf("Enter number of columns in matrix : ");
    scanf("%d", &n);

    // Take input for matrix

    int matrix[m][n];
    matrix_input(m, n, matrix);

    // Main logic

    int target_row, source_row, multiplier;

    printf("Enter number of row you want to subtract (source row) : ");
    scanf("%d", &source_row);

    printf("Enter number of row you want to make changes in (target row) : ");
    scanf("%d", &target_row);

    printf("Enter number you want to multiply to source row before subtraction : ");
    scanf("%d", &multiplier);

    // Loop for subtraction, logic works almost same way as row exchange

    for (int i = 0; i < n; i++)
    {
        matrix[target_row - 1][i] -= matrix[source_row - 1][i] * multiplier;
    }

    // Print result

    matrix_output(m, n, matrix);

    return 0;
}
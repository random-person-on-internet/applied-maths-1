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

    int target_row, divider;

    printf("Enter number of matrix you want changes in : ");
    scanf("%d", &target_row);

    printf("Enter number you want to divide it with : ");
    scanf("%d", &divider);

    for (int i = 0; i < n; i++)
    {
        matrix[target_row - 1][i] /= divider;
    }

    // Print result

    matrix_output(m, n, matrix);

    /*You can make float matrix for divisions which include decimal values*/

    return 0;
}
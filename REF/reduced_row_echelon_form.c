#include <stdio.h>
#include <conio.h>
#include "matrix.h"
#include "matrix_operations.h"
#include "ref_rref.h"

int reduced_row_echelon_form(int m, int n, float matrix[m][n])
{
    float multiplier;

    for (int i = m - 1; i > 0; i--)
    {
        // printf("To make all elements above PIVOT of Row %d zero : \n", i + 1);
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == 1)
            {
                for (int k = i - 1; k >= 0; k--)
                {
                    multiplier = matrix[k][j];
                    row_subtraction(k + 1, i + 1, multiplier, m, n, matrix);
                }
            }
        }
    }
    return 0;
}
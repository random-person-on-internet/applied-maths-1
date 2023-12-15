#include <stdio.h>
#include <conio.h>
#include "matrix.h"
#include "matrix_operations.h"
#include "ref_rref.h"

int row_echelon_form(int m, int n, float matrix[m][n])
{
    int zerorow = 0;
    for (int row = 0; row < m - zerorow; row++)
    {
        // find zero row and send them to end
        // printf("Now we will send all zero rows at end, if any!\nPress any key to continue...\n");
        // getch();
        int zeroes;

        for (int i = 0; i < m - zerorow; i++)
        {
            zeroes = 0; // initialize value of zeroes as 0 at beginning of new row
            for (int j = 0; j < n; j++)
            {
                if (matrix[i][j] == 0) // if there are zeroes in row, increase value of int zero
                {
                    zeroes++;
                }
                if (zeroes == n) // if value of zeroes = number of elements in row(n), increase number of zero rows
                {
                    row_swap(m - zerorow, i + 1, m, n, matrix); // swap zero row with last non zero row
                    zerorow++;
                    i = -1;
                }
            }
        }

        // get PIVOT worthy row and get it on top
        // printf("Now we will get a PIVOT worthy row on position!\nPress any key to continue...\n");
        // getch();
        int check = 0;

        for (int i = row; i < m - zerorow; i++)
        {
            for (int j = row; j < n; j++)
            {
                if (matrix[j][i] != 0)
                {
                    if (i != j)
                    {
                        row_swap(i + 1, j + 1, m, n, matrix);
                    }
                    check = 1;
                    break;
                }
                if (check == 1)
                {
                    break;
                }
            }
            if (check == 1)
            {
                break;
            }
        }

        // make PIVOT and make all numbers below it zero
        // printf("Now we will make it a PIVOT and make all numbers below it zero!\nPress any key to continue...\n");
        // getch();
        float divider, multiplier;
        check = 0;

        for (int i = row; i < m - zerorow; i++)
        {
            for (int j = row; j < n; j++)
            {
                if (matrix[i][j] != 0)
                {
                    divider = matrix[i][j];
                    row_division(i + 1, divider, m, n, matrix);

                    for (int k = i + 1; k < m - zerorow; k++)
                    {
                        if (matrix[k][j] != 0)
                        {
                            multiplier = matrix[k][j] / matrix[i][j];
                            row_subtraction(k + 1, i + 1, multiplier, m, n, matrix);
                        }
                    }
                    check = 1;
                }
                if (check == 1)
                {
                    break;
                }
            }
            if (check == 1)
            {
                break;
            }
        }
    }

    return 0;
}
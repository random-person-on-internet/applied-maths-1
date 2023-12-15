#include <stdio.h>
#include <conio.h>
#include "matrix.h"
#include "matrix_operations.h"
#include "ref_rref.h"

int main()
{
    int m, n, destinationRow, sourceRow, multiplier, divider;
    int error, exit;

    //----------------------------------------------------------------------------------------------
    // take input
    error = 0;
    do
    {
        if (error > 0)
        {
            if (error > 1)
            {
                printf("ABHE AANDHDA JOI NE LAKH NE\n");
            }
            printf("Please enter positive number!\n");
        }
        printf("Enter number of rows : ");
        scanf("%d", &m);
        error++;
    } while (m < 0);

    error = 0;
    do
    {
        if (error > 0)
        {
            if (error > 1)
            {
                printf("ABHE AANDHDA JOI NE LAKH NE\n");
            }
            printf("Please enter positive number!\n ");
        }
        printf("Enter number of columns : ");
        scanf("%d", &n);
        error++;
    } while (n < 0);

    if (m <= 0 || n <= 0)
    {
        printf("Invalid inputs...Exiting program...");
        getch();
        return -1;
    }

    float matrix[m][n];

    matrix_input(m, n, matrix);
    printf("\nIs this the matrix you have entered?\n");
    matrix_output(m, n, matrix);
    printf("\nIf not then type 0 to exit, type anything else to continue : ");
    scanf("%d", &exit);

    if (exit == 0)
    {
        return 0;
    }
    //----------------------------------------------------------------------------------------------
    // row echelon form
    row_echelon_form(m, n, matrix);
    printf("\n\nAnd there you have your Row Echelon Form!\n");
    printf("\n===========================================================================\n");
    
    //----------------------------------------------------------------------------------------------
    // reduced row echelon form
    printf("\n===========================================================================\n");
    reduced_row_echelon_form(m, n, matrix);
    printf("\nAnd there you have your Reduced Row Echelon Form!\n");
    printf("Press any key to exit...");

    getch();
    return 0;
}

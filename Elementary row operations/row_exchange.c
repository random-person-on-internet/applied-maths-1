#include <stdio.h>
#include "matrix_basics.h"

int main()
{
    int m, n;

    // take dimensions for matrix
    printf("Enter number of rows in matrix : ");
    scanf("%d", &m);

    printf("Enter number of columns in matrix : ");
    scanf("%d", &n);

    // take input for matrix
    int matrix[m][n];
    matrix_input(m, n, matrix);

    // main logic
    int dest, tar;
    // dest etle destination anne tar etle target

    printf("Enter number of row you want to change : ");
    scanf("%d", &dest);

    printf("Enter number of row you want to exchange it with : ");
    scanf("%d", &tar);

    // tar and dest can be used interchangeably as both will be exchanged anyways

    int temp;
    for (int i = 0; i < n; i++)
    {
        temp = matrix[dest - 1][i];
        matrix[dest - 1][i] = matrix[tar - 1][i];
        matrix[tar - 1][i] = temp;

        /* How it works? it changes numbers column wise no need to add more than one loop for this one*/
    }

    // Show result :

    printf("The result is : \n");
    matrix_output(m, n, matrix);

    return 0;
}
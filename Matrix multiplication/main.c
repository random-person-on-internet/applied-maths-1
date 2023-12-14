#include <stdio.h>
#include <conio.h>

// Function to take matrix input

int take_matirx_input(int m, int n, int matrix[m][n])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter number at row %d, column %d : ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
        printf("---------------------------\n");
    }
    return 0;
}

// Function to print matrix

int show_matrix(int m, int n, int matrix[m][n])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}

int main()
{
    int m1, n1, m2, n2;

    // Take dimensions for both matrices

    printf("Enter number of rows in matrix 1 : ");
    scanf("%d", &m1);
    printf("Enter number of columns in matrix 1 : ");
    scanf("%d", &n1);

    printf("\nEnter number of rows in matrix 2 : ");
    scanf("%d", &m2);
    printf("Enter number of columns in matrix 2 : ");
    scanf("%d", &n2);

    if (n1 != m2)
    {
        printf("Invalid Input, number of columns in matrix 1 is not equal to number of rows in matrix 2 hence multiplication not possible");
        return 0;
    }

    // Take inputs for matrices

    int matrix1[m1][n1], matrix2[m2][n2];
    printf("\n============\nEnter values of matrix 1 : \n");
    take_matirx_input(m1, n1, matrix1);
    printf("\n============\nEnter values of matrix 2 : \n");
    take_matirx_input(m2, n2, matrix2);

    // Logic for multiplication

    int result[m1][n2];

    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < n1; k++)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Show result

    printf("The answer is : \n");
    show_matrix(m1, n2, result);

    return 0;
}

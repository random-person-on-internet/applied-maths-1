#include <stdio.h>
#include <conio.h>

int main()
{
    int m, n;

    printf("Enter number of rows : ");
    scanf("%d", &m);
    printf("Enter number of columns : ");
    scanf("%d", &n);

    int matrix1[m][n], matrix2[m][n];

    // Take input for matrix : 1

    printf("Enter values for matrix 1 : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter number at row %d, column %d : ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
        printf("\n-------------------------------------------\n");
    }

    // Take input for matrix : 2

    printf("Enter values for matrix 2 : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter number at row %d, column %d : ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
        printf("\n-------------------------------------------\n");
    }

    // Logic for addition

    int result[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Show result

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

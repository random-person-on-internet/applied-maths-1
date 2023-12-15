#ifndef MATRIX_FUNCTIONS_AND_OPERATIONS_H
#define MATRIX_FUNCTIONS_AND_OPERATIONS_H

#include <stdio.h>

// matrix_input
int matrix_input(int m, int n, float matrix[m][n]);

// matrix_output
int matrix_output(int m, int n, float matrix[m][n]);

// row_exchange
int row_exchange(int m, int n, float matrix[m][n], int dest, int tar);

// row_subtraction
int row_subtraction(int m, int n, float matrix[m][n], int target_row, int source_row, float multiplier);

// row_division
int row_division(int m, int n, float matrix[m][n], int target_row, float divider);

#endif
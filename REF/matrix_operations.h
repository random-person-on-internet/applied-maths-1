#ifndef MATRIX_OPERATIONS_H
#define MATRIX_OPERATIONS_H

#include <stdio.h>

// row swap
int row_swap(int destinationRow, int sourceRow, int m, int n, float matrix[m][n]);

// row multiplication
int row_multiplication(int destinationRow, float multiplier, int m, int n, float matrix[m][n]);

// row division
int row_division(int destinationRow, float divider, int m, int n, float matrix[m][n]);

// row subtraction
int row_subtraction(int destinationRow, int sourceRow, float multiplier, int m, int n, float matrix[m][n]);

#endif
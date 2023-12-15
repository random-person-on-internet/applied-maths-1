#ifndef REF_RREF_H
#define REF_RREF_H

#include <stdio.h>

// row echelon form
int row_echelon_form(int m, int n, float matrix[m][n]);

// reduced row echelon form
int reduced_row_echelon_form(int m, int n, float matrix[m][n]);

#endif
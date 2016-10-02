/*
    dmatrix.h
    a header file of double matrix
*/
#ifndef DMATRIX_H
#define DMATRIX_H

extern double **load_dmatrix(char *filename, int *rows, int *cols);
extern double **dmatrix(int rows, int cols);
extern void free_dmatrix(double **matrix, int rows);
#endif

#ifndef CONNECTEDPROJECT_LIBRARYA_H
#define CONNECTEDPROJECT_LIBRARYA_H


#include <iosfwd>
int** addMatrix();                                  //
int** subtractMatrix();                             //
void squareMatrix(int** &matrix,int &size);         //
int** multiplyByScalar(int scalar);                 //
int** multiply(int** a, int** b, int n);            //
double** multiply(double **a, double **b, int n);
int** multiplyMatrix();                             //
int** transposeMatrix ();                           //
int** power(int** a, int n, int m);                 //
int** powerMatrix();
void clearMemory(int** a, int n);
int determinantMatrix(int** a, int n);              //
double determinantMatrix(double **a, int n);
bool matrixIsDiagonal(int** a, int n);              //
void sortRowsInMatrix();                            //
void createMatrix(int** &A, int &row, int &column); //
void swap(int *x, int *y);                          //
#endif //CONNECTEDPROJECT_LIBRARYA_H

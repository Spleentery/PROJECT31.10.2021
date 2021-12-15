#ifndef CONNECTEDPROJECT_LIBRARYA_H
#define CONNECTEDPROJECT_LIBRARYA_H


#include <iosfwd>
void init(int** &matrix,int &size);
void create(int** &matrix,int &size);
void Delete(int** &matrix, int &size);
void print(int** &matrix,int &size);
void createMatrix(int** &A, int &row, int &column); //
int** addMatrix();                                  //
int** subtractMatrix();                             //
int **multiplyByScalar();                 //
int** multiply(int** a, int** b, int n);            //
double** multiply(double **a, double **b, int n);
int** multiplyMatrix();                             //
int** transposeMatrix ();                           //
int** Power(int** a, int n, int m);                 //
int** powerMatrix();
int determinantMatrix(int** a, int n);              //
double determinantMatrix(double **a, int n);
bool matrixIsDiagonal(int** a, int n);              //
void swap(int *x, int *y);                          //
void bubbleSort(int arr[], int n);
void sortRowsInMatrix();                            //

#endif //CONNECTEDPROJECT_LIBRARYA_H

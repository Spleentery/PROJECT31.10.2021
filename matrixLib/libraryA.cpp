#include <iostream>
#include "libraryA.h"

void squareMatrix(int** &matrix,int &size)  //matrix, size
{                                                //create a matrix with the same size of rows and columns
    int n;
    std::cout << "Enter a matrix size:" << "\n";
    std::cout << "n = ";
    std::cin >> n;
    int** arr = new int* [n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }
    std::cout << "Enter a matrix:" << "\n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cin >> arr[i][j];
        }
    }
    matrix = arr;
    size = n;
}
void createMatrix(int** &A, int &row, int &column) {
    int n,m;                                           //create matrix with different size of rows and columns
    std::cout << "Enter a matrix rows:" << "\n";
    std::cout << "n = ";
    std::cin >> n;
    std::cout << "Enter a matrix columns:" << "\n";
    std::cout << "m = ";
    std::cin >> m;
    int** a = new int* [n];
    for (int i = 0; i < n; i++)
    {
        a[i] = new int[m];
    }
    std::cout << "Enter a matrix:" << "\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cin >> a[i][j];
        }
    }
    row  = n;
    column = m;
    A = a;
}
int** addMatrix(){                              //add two matrices of the same size
    int n = 1;
    int** a = new int* [n];
    squareMatrix(a,n);

    int** b = new int* [n];
    std::cout << "Second matrix:" << std::endl;
    squareMatrix(b,n);
    int** difference = new int* [n];
    for (int i = 0; i < n; i++)
    {
        difference[i] = new int[n];
    }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                difference[i][j] = a[i][j] + b[i][j];
                std::cout << difference[i][j] << " ";
            }
            std::cout << "\n";
        }
        return 0;
}

int** subtractMatrix(){     //subtract matrices of the same size
    int n = 1;
    int** a = new int* [n];
    squareMatrix(a,n);

    int** b = new int* [n];
    std::cout << "Second matrix:" << std::endl;
    squareMatrix(b,n);
    int** difference = new int* [n];
    for (int i = 0; i < n; i++)
    {
        difference[i] = new int[n];
    }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                difference[i][j] = a[i][j] - b[i][j];
                std::cout << difference[i][j] << " ";
            }
            std::cout << "\n";
        }
        return 0;
}
int** multiplyByScalar(int scalar) //scalar                 //multiply a matrix by an integer
{
    int n,m;
    int** a = new int* [2];
    createMatrix(a,n,m);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            a[i][j] *= scalar;
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << a[i][j] << std::endl;
        }
    }
    return a;
    for (int i = 0; i < n; i++)
    {
        delete[] a[i];
    }
    delete[] a;
}
int** multiply(int** a, int** b, int n)  //matrix a, matrix b, size n
{                                        // multiply two matrices of the same size
    int product;                         //I'm using this function in Power function
    int** c = new int* [n];              //use int
    for (int i = 0; i < n; i++)
    {
        c[i] = new int[n];
    }
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
        {
            product = 0;
            for (int r = 0; r < n; r++)
            {
                product += a[j][r] * b[r][i];
            }
            c[j][i] = product;
        }
    }
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            std::cout << c[i][j] << " ";
        }
        std::cout << "\n";
    }
    return c;
    for (int i = 0; i < n; i++)        //free dynamically allocated memory
    {
        delete[] c[i];
    }
    delete[] c;
}
double** multiply(double **a, double **b, int n)  //matrix a, matrix b, size n
{                                        // multiply two matrices of the same size
    double product;                         //I'm using this function in Power function
    double** c = new double* [n];           //use double
    for (int i = 0; i < n; i++)
    {
        c[i] = new double[n];
    }
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
        {
            product = 0;
            for (int r = 0; r < n; r++)
            {
                product += a[j][r] * b[r][i];
            }
            c[j][i] = product;
        }
    }
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            std::cout << c[i][j] << " ";
        }
        std::cout << "\n";
    }
    return c;
    for (int i = 0; i < n; i++)        //free dynamically allocated memory
    {
        delete[] c[i];
    }
    delete[] c;
}
int** multiplyMatrix()
{
    int n;
    std::cout << "enter size of matrix to multiply" << std::endl;
    std::cin >> n;
    int** a = new int* [n];
    for (int i = 0; i < n; i++)
    {
        a[i] = new int[n];
    }
    std::cout << "Enter a matrix:" << "\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cin >> a[i][j];
        }
    }
    int** b = new int* [n];
    for (int i = 0; i < n; i++)
    {
        b[i] = new int[n];
    }
    std::cout << "Enter a matrix:" << "\n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cin >> b[i][j];
        }
    }
    int sum;
    int** c = new int* [n];
    for (int i = 0; i < n; i++)
    {
        c[i] = new int[n];
    }
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
        {
            sum = 0;
            for (int r = 0; r < n; r++)
            {
                sum += a[j][r] * b[r][i];
            }
            c[j][i] = sum;
        }
    }
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            std::cout << c[i][j] << " ";
        }
        std::cout << "\n";
    }
    return c;
    for (int i = 0; i < n; i++)
    {
        delete[] c[i];
    }
    delete[] c;
}

int** transposeMatrix () {
     int n;
    std::cout << "enter size of matrix to transpoze" << std::endl;
    std::cin >> n;
    int** a = new int* [n];
    for (int i = 0; i < n; i++)
    {
        a[i] = new int[n];
    }
    std::cout << "Enter a matrix:" << "\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cin >> a[i][j];
        }
    }
    int** t = new int* [n];
    for (int i = 0; i < n; i++)
    {
        t[i] = new int[n];
    }
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            t[i][j] = a[j][i];
        }
    }
    std::cout << "Original matrix:" << std::endl;
     for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
           std::cout << a[i][j] << " ";
    }
    std::cout << "\n";
    }
    std::cout << "Transpoze Matrix:" << std::endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
           std::cout << t[i][j] << " ";
    }
    std::cout << "\n";
    }

    return 0;
}

int** power(int** a, int n, int m) //matrix, size, power
{
    if (m == 1)
        return a;
    if (m % 2 == 1)
        return multiply(power(a, n, m - 1), a, n);
    else {
        a = power(a, n, m / 2);
        return multiply(a, a, n);
    }
}
int** powerMatrix() {
                int n;
                std::cout << "enter size of a matrix" << std::endl;
                std::cin >> n;
                int** a = new int* [n];
                for (int i = 0; i < n; i++)
                {
                    a[i] = new int[n];
                }
                std::cout << "Enter a matrix:" << "\n";
                for (int i = 0; i < n; i++)
                {
                    for (int j = 0; j < n; j++)
                    {
                        std::cin >> a[i][j];
                    }
                }
              return power(a, n, 2);

}

 void clearMemory(int** a, int n) { //function frees memory, that was used to create matrix
        for (int i = 0; i < n; i++) {
                delete[] a[i];
            }
            delete [] a;
        }
int determinantMatrix(int** a, int n) {
        if (n == 1)
            return a[0][0];
        else if (n == 2)
            return a[0][0] * a[1][1] - a[0][1] * a[1][0];
        else {
            int d = 0;
            for (int k = 0; k < n; k++) {
                int** b = new int*[n-1];
                for (int i = 0; i < n - 1; i++) {
                    b[i] = new int[n-1];
                }
                for (int i = 1; i < n; i++) {
                    for (int j = 0; j < n; j++) {
                        if (j == k)
                            continue;
                        else if (j < k)
                            b[i-1][j] = a[i][j];
                        else
                            b[i-1][j-1] = a[i][j];
                    }
                }
                d += pow(-1, k + 2) * a[0][k] * determinantMatrix(b, n - 1);
                clearMemory(b, n - 1);
            }
            return d;
        }
    }
    double determinantMatrix(double **a, int n) {
        if (n == 1)
            return a[0][0];
        else if (n == 2)
            return a[0][0] * a[1][1] - a[0][1] * a[1][0];
        else {
            int d = 0;
            for (int k = 0; k < n; k++) {
                double** b = new double*[n-1];
                for (int i = 0; i < n - 1; i++) {
                    b[i] = new double[n-1];
                }
                for (int i = 1; i < n; i++) {
                    for (int j = 0; j < n; j++) {
                        if (j == k)
                            continue;
                        else if (j < k)
                            b[i-1][j] = a[i][j];
                        else
                            b[i-1][j-1] = a[i][j];
                    }
                }
                d += pow(-1, k + 2) * a[0][k] * determinantMatrix(b, n - 1);
            }
            return d;
        }
    }
bool matrixIsDiagonal(int** a, int n)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if ((i != j) && (a[i][j] != 0))
                return false;
    return true;
}
void swap(int *x, int *y) //e.g a[0][0], a[0][1]
{
    int t = 0;
    t = *x;
    *x = *y;
    *y = t;
}
void sortRowsInMatrix()  //using bubble sort to sort a matrix
{
    int n,m;
    int** arr = new int* [2];
    createMatrix(arr,n,m);
    for(int k = 0; k < n; k++)
    {
        for(int l = 0; l < m; l++)
        {
            for(int i = 0; i < n; i++)
            {
                for(int j = 0; j < m; j++)
                {
                    if((j != m - 1) && (arr[i][j] > arr[i][j + 1])) {
                        swap(&arr[i][j], &arr[i][j + 1]);
                    }
                    else
                    {
                        if((i != n - 1) && (arr[i][j] > arr[i + 1][0])) {
                            swap(&arr[i][j], &arr[i + 1][0]);
                        }
                    }
                }
            }
        }
    }
    std::cout << "sorted matrix:" << std::endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
             std::cout << arr[i][j] << " ";
        }
        std::cout << "\n";
    }
}


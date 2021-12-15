#include <iostream>
#include "string"
#include "interface.h"
#include "libraryA.h"
static const char* options[] =
{
	"1 - addMatrix",
	"2 - subtractMatrix",
	"3 - multiply",
	"4 - multiplyByScalar",
	"5 - transposeMatrix",
	"6 - powerMatrix",
	"7 - determinantMatrix",
	"8 - matrixIsDiagonal",
    "9 - swap",
    "10 - sortRow",
    "11 - sortRowsInMatrix",
    "12 - help",
    "0 - exit",
};

void interface()
{
	for (int i = 0; i < 13; i++) {
        std::cout << options[i] << std::endl;
    }
}
bool isNumber(const std::string& str)
{
    for (char const &c : str) {
        if (isdigit(c) == 0) return false;
    }
    return true;
}
void help(){
    std::cout << "Welcome to Matrix Calculator!\n"
    <<"Add two matrices,                 type 1 or \"addMatrix\". You're supposed to enter two matrices of the same size\n"
    <<"Subtract one matrix from another, type 2 or \"subtractMatrix\"\n"
    <<"Multiply two matrices,            type 3 or \"multiply\"\n"
    <<"Multiply a matrix by scalar,      type 4 or \"multiplyByScalar\"\n"
    <<"TransposeMatrix,                  type 5 or \"transposeMatrix\"\n"
    <<"Calculate the power of a matrix,  type 6 or \"powerMatrix\"\n"
    <<"determinantMatrix,                type 7 or \"determinantMatrix\"\n"
    <<"Check if matrix is diagonal,      type 8 or \"matrixIsDiagonal\"\n"
    <<"Swap,                             type 9 or \"swap\"\n"
    <<"Sort array,                       type 10 or \"sortRow\"\n"
    <<"Sort numbers in a matrix,         type 11 or \"sortRowsInMatrix\"\n"
    <<"For help,                         type 12 or H,h,help,Help,HELP,\n"
    <<"for exit type exit or 0\n";
}
void sortRow(){
     int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    std::cout<<"Sorted array: \n";
    for (int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
     std::cout << std::endl;
}
void Swap(){
       int n;
       std::cout << "enter size of matrix to swap" << std::endl;
       std::cin >> n;
       int **a = new int *[n];
       create(a,n);
       swap(&a[0][0], &a[0][1]);
       print(a,n);
}
void diagonal(){
    int n;
    std::cout << "enter size of matrix to determine if Diagonal" << std::endl;
    std::cin >> n;
    int **a = new int *[n];
    create(a,n);
    std::cout << matrixIsDiagonal(a, n) << std::endl;
}
void determinant(){
                    int n;
                    std::cout << "enter size of matrix to determine" << std::endl;
                    std::cin >> n;
                    int **a = new int *[n];
                    create(a,n);
                    std::cout << determinantMatrix(a, n) << std::endl;
}
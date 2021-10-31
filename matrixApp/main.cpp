#include <iostream>
#include "string"
#include "libraryA.h"
#include "interface.h"
using namespace std;

int main(int argc, char *argv[]) {

    string response;
    while (1) {
        cout << "Good morning! Choose from the below:\n";
        interface();
        cin >> response;
        if (isNumber(response) == true) {
            int input = stoi(response);
            switch (input) {
                case 0:
                 return -1;
                case 1:
                    addMatrix();
                    break;
                case 2:
                    subtractMatrix();
                    break;
                case 3:
                    multiplyMatrix();
                    break;
                case 4:
                    multiplyByScalar(4);
                    break;
                case 5:
                    transposeMatrix();
                    break;
                case 6:
                    powerMatrix();
                    break;
                case 7: {
                    int n;
                    std::cout << "enter size of matrix to determine" << std::endl;
                    std::cin >> n;
                    int **a = new int *[n];
                    for (int i = 0; i < n; i++) {
                        a[i] = new int[n];
                    }
                    std::cout << "Enter a matrix:" << "\n";
                    for (int i = 0; i < n; i++) {
                        for (int j = 0; j < n; j++) {
                            std::cin >> a[i][j];
                        }
                    }
                    cout << determinantMatrix(a, n);
                }
                    break;
                case 8: {
                    int n;
                    std::cout << "enter size of matrix to determine if Diagonal" << std::endl;
                    std::cin >> n;
                    int **a = new int *[n];
                    for (int i = 0; i < n; i++) {
                        a[i] = new int[n];
                    }
                    std::cout << "Enter a matrix:" << "\n";
                    for (int i = 0; i < n; i++) {
                        for (int j = 0; j < n; j++) {
                            std::cin >> a[i][j];
                        }
                    }
                    cout << matrixIsDiagonal(a, n) << endl;
                }
                    break;

                case 9: {
                    int n;
                    std::cout << "enter size of matrix to swap" << std::endl;
                    std::cin >> n;
                    int **a = new int *[n];
                    for (int i = 0; i < n; i++) {
                        a[i] = new int[n];
                    }
                    std::cout << "Enter a matrix:" << "\n";
                    for (int i = 0; i < n; i++) {
                        for (int j = 0; j < n; j++) {
                            std::cin >> a[i][j];
                        }
                    }
                    swap(a[0][0], a[0][1]);
                    for (int i = 0; i < n; ++i) {
                        for (int j = 0; j < n; ++j) {
                            std::cout << a[i][j] << " ";
                        }
                        std::cout << "\n";
                    }
                }

                    break;
                case 10:
                    sortRowsInMatrix();
                    break;

                default:
                    interface();
                    continue;

            }
        }
            else if (isNumber(response) == false) {
                while (response == "help") {
                    cout << "Good morning! Choose from the below:\n";
                    interface();
                    break;
                }
                while (response == "addMatrix") {
                    addMatrix();
                    break;
                }
                while (response == "subtractMatrix") {
                    subtractMatrix();
                    break;
                }
                while (response == "multiplyMatrix") {
                    multiplyMatrix();
                    break;
                }
                while (response == "multiplyByScalar") {
                    multiplyByScalar(3);
                    break;
                }
                while (response == "transposeMatrix") {
                    transposeMatrix();
                    break;
                }
                while (response == "powerMatrix") {
                    powerMatrix();
                    break;
                }
                 while (response == "matrixIsDiagonal") {
                    int n;
                    std::cout << "enter size of matrix to determine if Diagonal" << std::endl;
                    std::cin >> n;
                    int **a = new int *[n];
                    for (int i = 0; i < n; i++) {
                        a[i] = new int[n];
                    }
                    std::cout << "Enter a matrix:" << "\n";
                    for (int i = 0; i < n; i++) {
                        for (int j = 0; j < n; j++) {
                            std::cin >> a[i][j];
                        }
                    }
                   cout << matrixIsDiagonal(a, n) << endl;
                    break;
                }
                while (response == "determinantMatrix") {
                    int n;
                    std::cout << "enter size of matrix to determine" << std::endl;
                    std::cin >> n;
                    int **a = new int *[n];
                    for (int i = 0; i < n; i++) {
                        a[i] = new int[n];
                    }
                    std::cout << "Enter a matrix:" << "\n";
                    for (int i = 0; i < n; i++) {
                        for (int j = 0; j < n; j++) {
                            std::cin >> a[i][j];
                        }
                    }
                    cout << determinantMatrix(a, n);
                    break;
                }
                while (response == "swap") {
                    int n;
                    std::cout << "enter size of matrix to determine" << std::endl;
                    std::cin >> n;
                    int **a = new int *[n];
                    for (int i = 0; i < n; i++) {
                        a[i] = new int[n];
                    }
                    std::cout << "Enter a matrix:" << "\n";
                    for (int i = 0; i < n; i++) {
                        for (int j = 0; j < n; j++) {
                            std::cin >> a[i][j];
                        }
                    }
                    swap(a[0][0], a[0][1]);
                       for (int i = 0; i < n; ++i) {
                        for (int j = 0; j < n; ++j) {
                            std::cout << a[i][j] << " ";
                        }
                        std::cout << "\n";
                    }
                    break;
                }
                while (response == "sortRowsInMatrix") {
                    sortRowsInMatrix();
                    break;
                }
                while (response == "exit") {
                    return -1;
                }
            } else {
                cout << "incorrect input" << endl;
                interface();
                break;
            }
        }
        return 0;



    }


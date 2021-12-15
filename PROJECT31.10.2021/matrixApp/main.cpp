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
        if (isNumber(response)) {
            int input = stoi(response);
            switch (input) {
                case 0:
                    return -1;
                case 1:
                    addMatrix();
                    system("pause");
                    break;
                case 2:
                    subtractMatrix();
                    system("pause");
                    break;
                case 3:
                    multiplyMatrix();
                    system("pause");
                    break;
                case 4:
                    multiplyByScalar();
                    system("pause");
                    break;
                case 5:
                    transposeMatrix();
                    system("pause");
                    break;
                case 6:
                    powerMatrix();
                    system("pause");
                    break;
                case 7:
                    determinant();
                    system("pause");
                    break;
                case 8:
                    diagonal();
                    system("pause");
                    break;

                case 9: {
                    Swap();
                    system("pause");
                    break;

                    case 10:
                        sortRow();
                        system("pause");
                    break;
                    case 11:
                        sortRowsInMatrix();
                    break;
                    case 12:
                        help();
                    system("pause");
                        break;

                    default:
                        interface();
                    continue;
                }
            }
        }else if (!isNumber(response)) {
                while (response == "help") {
                    cout << "Good morning! Choose from the below:\n";
                    interface();
                    break;
                }
                while (response == "addMatrix") {
                    addMatrix();
                     system("pause");
                    break;
                }
                while (response == "subtractMatrix") {
                    subtractMatrix();
                     system("pause");
                    break;
                }
                while (response == "multiplyMatrix") {
                    multiplyMatrix();
                     system("pause");
                    break;
                }
                while (response == "multiplyByScalar") {
                    multiplyByScalar();
                     system("pause");
                    break;
                }
                while (response == "transposeMatrix") {
                    transposeMatrix();
                     system("pause");
                    break;
                }
                while (response == "powerMatrix") {
                    powerMatrix();
                     system("pause");
                    break;
                }
                 while (response == "matrixIsDiagonal") {
                    diagonal();
                     system("pause");
                    break;
                }
                while (response == "determinantMatrix") {
                    determinant();
                    system("pause");
                    break;
                }
                while (response == "swap") {
                    Swap();
                    system("pause");
                    break;
                }
                 while (response == "sortRow") {
                    sortRow();
                    system("pause");
                    break;
                }
                while (response == "sortRowsInMatrix") {
                    sortRowsInMatrix();
                    break;
                }
                while (response == "help" || response == "h" || response == "Help" || response == "H" || response == "HELP"){
                    help();
                    system("pause");
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


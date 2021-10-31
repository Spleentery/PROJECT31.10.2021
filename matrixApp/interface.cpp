#include <iostream>
#include "string"
#include "interface.h"
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
    "10 - sortRowsInMatrix",
    "0 - exit",
};

void interface()
{
	for (int i = 0; i < 11; i++) {
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
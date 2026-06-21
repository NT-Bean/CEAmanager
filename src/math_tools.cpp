#include "math_tools.h"

void MathTools::setStdOutPrecision(int decimalPlaces)
{
    std::cout << std::fixed << std::setprecision(decimalPlaces);
}
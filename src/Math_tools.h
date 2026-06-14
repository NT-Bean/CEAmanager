#ifndef MATH_TOOLS_H
#define MATH_TOOLS_H

#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>

template<typename F>
double integrate(F function, double start, double end, int iterations);

#endif
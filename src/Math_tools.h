#ifndef MATH_TOOLS_H
#define MATH_TOOLS_H

#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>

template<typename F>
double integrate(F function, double start, double end, int iterations, bool isStrict)
{
    double sum = 0;
    double step = (end - start) / iterations;

    if (step < 0.001 && isStrict)
        std::cout << "\n   !WARNING: step (" << step << ") may be too low for accurate calculations" << "\n";

    for (int i = 0; i < iterations; i++)
    {
        sum += step * (function(start + i * step) + function(start + (i+1) * step)) / 2;
    }

    return sum;
}

template<typename F>
double integrate(F function, double start, double end, int iterations) { return integrate(function, start, end, iterations, false); }

#endif
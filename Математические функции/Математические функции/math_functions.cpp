#include <iostream>
#include "math_functions.h"
#include <cmath>

namespace MathFunctions {
    double add(double a, double b) {
        std::cout << a << " плюс " << b << " = ";
        return a + b;
    }

    double subtract(double a, double b) {
        std::cout << a << " минус " << b << " = ";
        return a - b;
    }

    double multiply(double a, double b) {
        std::cout << a << " умножить на " << b << " = ";
        return a * b;
    }

    double divide(double a, double b) {
        if (b == 0) {
            std::cout << a << " разделить на " << b << " = ";
            return 0;
        }
        std::cout << a << " разделить на " << b << " = ";
        return a / b;
    }

    double power(double base, int exponent) {
        return std::pow(base, exponent);
    }
}
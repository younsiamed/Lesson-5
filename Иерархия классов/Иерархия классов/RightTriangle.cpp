#include "RightTriangle.h"

RightTriangle::RightTriangle(double a, double b, double c) : Triangle(a, b, c, 90, 90, 90) {
    name = "Прямоугольный треугольник";
}
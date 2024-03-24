#include "Triangle.h"

Triangle::Triangle(double a, double b, double c, double A, double B, double C) {
    sides = { a, b, c };
    angles = { A, B, C };
    name = "Треугольник";
}
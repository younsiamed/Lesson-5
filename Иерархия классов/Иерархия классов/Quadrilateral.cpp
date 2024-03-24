#include "Quadrilateral.h"

Quadrilateral::Quadrilateral(double a, double b, double c, double d, double A, double B, double C, double D) {
    sides = { a, b, c, d };
    angles = { A, B, C, D };
    name = "Четырёхугольник";
}
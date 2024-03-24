#include <iostream>
#include "Triangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadrilateral.h"
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhombus.h"

void printInfo(const Figure* figure) {
    std::cout << figure->getName() << ":" << std::endl;
    std::vector<double> sides = figure->getSides();
    std::vector<double> angles = figure->getAngles();
    std::cout << "Стороны: ";
    for (size_t i = 0; i < sides.size(); ++i) {
        char angle = 'a' + i;
        std::cout << angle << "=" << sides[i] << " ";
    }
    std::cout << std::endl << "Углы: ";
    for (size_t i = 0; i < angles.size(); ++i) {
        char angle = 'A' + i;
        std::cout << angle << "=" << angles[i] << " ";
    }
    std::cout << std::endl << std::endl;
}

int main() {
    setlocale(LC_ALL, "Russian");
    Triangle triangle(10, 20, 30, 50, 60, 70);
    RightTriangle rightTriangle(10, 20, 30);
    IsoscelesTriangle isoscelesTriangle(10, 20, 10);
    EquilateralTriangle equilateralTriangle(30);
    Quadrilateral quadrilateral(10, 20, 30, 40, 50, 60, 70, 80);
    Rectangle rectangle(10, 20);
    Square square(20);
    Parallelogram parallelogram(20, 30, 30);
    Rhombus rhombus(30, 30);

    std::vector<Figure*> figures = { &triangle, &rightTriangle, &isoscelesTriangle,
                                    &equilateralTriangle, &quadrilateral, &rectangle,
                                    &square, &parallelogram, &rhombus };

    for (const auto& figure : figures) {
        printInfo(figure);
    }

    return 0;
}
#include "Figure.h"

std::vector<double> Figure::getSides() const {
    return sides;
}

std::vector<double> Figure::getAngles() const {
    return angles;
}

const char* Figure::getName() const {
    return name;
}
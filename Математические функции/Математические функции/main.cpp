#include <iostream>
#include "math_functions.h"

int main() {
    setlocale(LC_ALL, "Russian");
    double num1, num2;
    int choice;

    std::cout << "������� ������ �����: ";
    std::cin >> num1;
    std::cout << "������� ������ �����: ";
    std::cin >> num2;

    std::cout << "�������� �������� (1 - ��������, 2 - ���������, 3 - ���������, 4 - �������, 5 - ���������� � �������): ";
    std::cin >> choice;

    switch (choice) {
    case 1:
        std::cout << MathFunctions::add(num1, num2) << std::endl;
        break;
    case 2:
        std::cout << MathFunctions::subtract(num1, num2) << std::endl;
        break;
    case 3:
        std::cout << MathFunctions::multiply(num1, num2) << std::endl;
        break;
    case 4:
        std::cout << MathFunctions::divide(num1, num2) << std::endl;
        break;
    case 5:
        std::cout << num1 << " � ������� " << num2 << " = " << MathFunctions::power(num1, static_cast<int>(num2)) << std::endl;
        break;
    default:
        std::cout << "������������ ����� ��������." << std::endl;
    }

    return 0;
}
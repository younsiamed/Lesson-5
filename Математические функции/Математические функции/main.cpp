#include <iostream>
#include "math_functions.h"

int main() {
    setlocale(LC_ALL, "Russian");
    double num1, num2;
    int choice;

    std::cout << "Введите первое число: ";
    std::cin >> num1;
    std::cout << "Введите второе число: ";
    std::cin >> num2;

    std::cout << "Выберите операцию (1 - сложение, 2 - вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
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
        std::cout << num1 << " в степени " << num2 << " = " << MathFunctions::power(num1, static_cast<int>(num2)) << std::endl;
        break;
    default:
        std::cout << "Некорректный выбор операции." << std::endl;
    }

    return 0;
}
#include <iostream>
#include "counter.h"

int main() {
    setlocale(LC_ALL, "Russian");
    std::string response;
    std::cout << "������ ������� ��������� �������� ��������? ������� yes ��� no: ";
    std::cin >> response;

    int initialValue = 1;
    if (response == "yes") {
        std::cout << "������� ��������� �������� ��������: ";
        std::cin >> initialValue;
    }

    Counter counter(initialValue);

    char command;
    do {
        std::cout << "������� ������� ('+', '-', '=' ��� 'x'): ";
        std::cin >> command;

        switch (command) {
        case '+':
            counter.increment();
            break;
        case '-':
            counter.decrement();
            break;
        case '=':
            std::cout << "������� �������� ��������: " << counter.getValue() << std::endl;
            break;
        case 'x':
            std::cout << "�� ��������!" << std::endl;
            break;
        default:
            std::cout << "�������� �������. ���������� �����." << std::endl;
        }
    } while (command != 'x');
    return 0;
}
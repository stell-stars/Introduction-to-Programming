#include <iostream>
#include <iomanip>

int main() {
    double number;
    std::cout << "дробное число: ";
    std::cin >> number;

        int inInt = static_cast<int>(number); // Приведение к int
        int inFloat = static_cast<float>(number); // Приведение к float
        double inDouble = number; // Оставляем в double

        std::cout << std::fixed << std::setprecision(15);

        std::cout << "Значение в double: " << inDouble << "\n";
        std::cout << "В int: " << inInt << " Потеря: " << (inDouble - inInt) << "\n";
        std::cout << "В float: " << inFloat << " Потеря: " << (inDouble - inFloat) << "\n";
}
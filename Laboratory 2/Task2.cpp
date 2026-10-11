#include <iostream>
#include <iomanip>  // Подключаем для функции setprecision()

int main() {

    double a {}, b {}, c {}, d {}, y {};
    std::cout << "Введите a: ";
    std::cin >> a;
    std::cout << "Введите b: ";
    std::cin >> b;
    std::cout << "Введите c: ";
    std::cin >> c;
    std::cout << "Введите d: ";
    std::cin >> d;

    // Проверка деления на ноль
    if (c - d == 0.0) {
        std::cout << "Ошибка: деление на ноль (c - d = 0)!" << std::endl;
        return 1;
    }

    // Явное приведение для гарантии вещественного деления
    y = static_cast<double>(a + b) / static_cast<double>(c - d);

    std::cout << std::fixed << std::setprecision(4);   //Пишем, чтобы значения были с 4 знаками после запятой
    std::cout << "y = (a + b) / (c - d) = " << y << std::endl;
}
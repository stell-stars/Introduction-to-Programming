#include <iostream>

int main() {

    double a {}, b {}, area {};  // Тип double, так как значения могут быть дробными
    std::cout << "Введите катет a: ";
    std::cin >> a;
    std::cout << "Введите катет b: ";
    std::cin >> b;
    area = (a * b) / 2.0;     // Делим на 2.0.

    std::cout << "Ответ: площадь прямоугольного треугольника = " << area << std::endl;
}
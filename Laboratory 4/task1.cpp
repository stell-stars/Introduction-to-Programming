#include <iostream>

int main() {
    int number {}; // Инициализирую переменную для числа четверти
    std::cout << "Пожалуйста, введите целое число - номер четверти координатной плоскости от 1 до 4 включительно: ";
    std::cin >> number; // Сохраняю введённое число в переменую number

    switch (number) { // Через конструкцию switch проверяю введённые значения
        case 1:
            std::cout << "++" << std::endl;
            break;
        case 2:
            std::cout << "+-" << std::endl;
            break;
        case 3:
            std::cout << "--" << std::endl;
            break;
        case 4:
            std::cout << "-+" << std::endl;
            break;
        default:
            std::cout << "Кажется, вы ввели не число в диапазоне [1; 4], а что-то другое! ❌️" << std::endl; // Пользователь ввёл что-то другое? Вернуть ошибку!
            return 1;
    }
}
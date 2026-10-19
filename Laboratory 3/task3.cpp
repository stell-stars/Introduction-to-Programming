#include <iostream> // Подключаю библиотеку iostream
#include <ctime> // Подключаю библиотеку ctime, чтобы использовать функцию std::time()
#include <cstdlib> // Подключаю библиотеку cstdlib, чтобы использовать функцию std::srand()

// 15
int main() {
    int gues_number1{ 0 };
    int gues_number2{ 0 };
    int gues_number3{ 0 }; // Инициализирую 3 переменных для 3 загаданных чисел

    int costum_number1{ 0 };
    int costum_number2{ 0 };
    int costum_number3{ 0 }; // Инициализирую 3 переменных для 3 чисел введённых пользователем

    gues_number1 = std::rand(static_cast<unsigned>(std::time(nullptr))) % 9 + 1;
    gues_number2 = std::rand(static_cast<unsigned>(std::time(nullptr))) % 9 + 1;
    gues_number3 = std::rand(static_cast<unsigned>(std::time(nullptr))) % 9 + 1; // Получаю случайные значения для лотереи

    std::cout << "Пожалуйста, введите 3 цифры - каждая от 1 до 9 включительно." << "\n";
    std::cout << "Сейчас введите первую цифру: ";
    std::cin >> costum_number1;
    std::cout << std::endl;
    std::cout << "Сейчас введите вторую цифру: ";
    std::cin >> costum_number2;
    std::cout << std::endl;
    std::cout << "Сейчас введите третью цифру: ";
    std::cin >> costum_number3;
    std::cout << std::endl;

}

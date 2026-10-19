#include <iostream> // Подключаю библиотеку iostream
#include <ctime> // Подключаю библиотеку ctime, чтобы использовать функцию std::time()
#include <cstdlib> // Подключаю библиотеку cstdlib, чтобы использовать функцию std::srand()

// 15
int main() {
    // Инициализирую 3 переменных для 3 загаданных чисел
    int secret_number1{ 0 };
    int secret_number2{ 0 };
    int secret_number3{ 0 }; 

    // Инициализирую 3 переменных для 3 чисел введённых пользователем
    int user_number1{ 0 };
    int user_number2{ 0 };
    int user_number3{ 0 }; 

    std::srand(static_cast<unsigned>(std::time(nullptr))); // Настраиваю начальные даные для функции rand()

    // ----------------Получаю случайные значения для лотереи----------------
    secret_number1 = std::rand() % 9 + 1;
    secret_number2 = std::rand() % 9 + 1;
    secret_number3 = std::rand() % 9 + 1; 
    int secret_full_number {secret_number1 + secret_number2 + secret_number3}; // Собираю полностью число из 3 цифр

    // ----------------Прошу пользователя ввести 3 числа с клавиатуры----------------
    std::cout << "Пожалуйста, введите 3 цифры через пробел - каждая от 1 до 9 включительно." << "\n";
    std::cin >> user_number1 >> user_number2 >> user_number3;
    std::cout << std::endl;
    int user_full_number {user_number1 + user_number2 + user_number3}; // Собираю полностью число из 3 цифр

    // ----------------Проверяю? что числа не выходят за диапазон----------------
    if (user_number1 < 1 || user_number1 > 9 || user_number2 < 1 || user_number2 > 9 || user_number3 < 1 || user_number3 > 9) { 
        std::cout << "Ошибка: все числа должны быть от 1 до 9" << std::endl;
        return 1;
    }

        // ----------------Проверяю все возможные исходы, согласно условию----------------
    if (secret_full_number == user_full_number) {
        std::cout << "Невероятно! Вы сумели угадать все 3 числа на своих же местах! " << "\n";
        std::cout << "Поэтому у вас Джекпот!" << std::endl;
        std::cout << "Загаданные числа:" << secret_full_number << std::endl;
        std::cout << "Ваши числа:" << user_full_number << std::endl;

    } else if ((user_number1 == secret_number1 || user_number1 == secret_number2 || user_number1 == secret_number3) && (user_number2 == secret_number1 || user_number2 == secret_number2 || user_number2 == secret_number3) && (user_number3 == secret_number1 || user_number3 == secret_number2 || user_number3 == secret_number3)) {
        std::cout << "Вы сумели угадать все 3 числа, но своих местах! " << "\n";
        std::cout << "Поэтому вы выигрываете Суперприз!" << std::endl;
        std::cout << "Загаданные числа:" << secret_full_number << std::endl;
        std::cout << "Ваши числа:" << user_full_number << std::endl;

    } else if (user_number1 == ) {

    }
}

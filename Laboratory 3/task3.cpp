#include <iostream> // Подключаю библиотеку iostream
#include <ctime> // Подключаю библиотеку ctime, чтобы использовать функцию std::time()
#include <cstdlib> // Подключаю библиотеку cstdlib, чтобы использовать функцию std::srand()

// 15
int main() {

    // ----------------Вывожу сообщение о начале лотереи----------------
    std::cout << "\n" << "-----Лотерея начинается!-----" << "\n" << "Если угадаете 3 числа, то у вас — джекпот. Если 3 числа (в любом порядке) — суперприз, 2 совпадения — приз, 1 — утешительный приз." << "\n" << "--------------------------------------------------------------------------------------" << "\n";
    
    // Настраиваю начальные даные для функции rand()
    std::srand(static_cast<unsigned>(std::time(nullptr))); 

    // ----------------Получаю случайные значения для лотереи и инициализирую 3 переменные----------------
    int secret_number1 = std::rand() % 9 + 1;
    int secret_number2 = std::rand() % 9 + 1;
    int secret_number3 = std::rand() % 9 + 1; 
    int secret_full_number {secret_number1 * 100 + secret_number2 * 10 + secret_number3}; // Собираю полностью число из 3 цифр

    // Инициализирую 3 переменных для 3 чисел введённых пользователем
    int user_number1{ 0 }, user_number2{ 0 }, user_number3{ 0 };

    
    // ----------------Прошу пользователя ввести 3 числа с клавиатуры----------------
    std::cout << "Пожалуйста, введите 3 цифры через пробел - каждая от 1 до 9 включительно:" << "\n";
    std::cin >> user_number1 >> user_number2 >> user_number3;
    std::cout << std::endl;
    int user_full_number {user_number1 * 100 + user_number2 * 10 + user_number3}; // Собираю полностью число из 3 цифр

    // ----------------Проверяю, числа не выходят ли за диапазон----------------
    if (user_number1 < 1 || user_number1 > 9 || user_number2 < 1 || user_number2 > 9 || user_number3 < 1 || user_number3 > 9) { 
        std::cout << "❌️ Ошибка: должны быть числа от 1 до 9! " << std::endl;
        return 1;
    }

        // ----------------Вывожу числа----------------
        std::cout << "------Ваши числа-----: " << user_full_number << std::endl;
        std::cout << "--Загаданные числа---: " << secret_full_number << std::endl;
        std::cout << "--------------------------------------------------------------------------------------"<< "\n" << " Итоги: " << std::endl;

        // ----------------Проверяю все возможные исходы, согласно условию----------------
    if (secret_full_number == user_full_number) {
        std::cout << "Невероятно! Вы угадали все 3 числа на своих же местах! " << "\n" << "Поэтому вы выигрываете Джекпот! 💰️" << std::endl;

    } else { // Иначе, проверяю остальные исходы - числа меняю на -1, чтобы они повторно не считались

        int total{ 0 }; // Инициализирую переменную счётчик
        if (user_number1 == secret_number1) { total = total + 1; secret_number1 = -1; }
        else if (user_number1 == secret_number2) { total = total + 1; secret_number2 = -1; }
        else if (user_number1 == secret_number3) { total = total + 1; secret_number3 = -1; }

        if (user_number2 == secret_number1) { total = total + 1; secret_number1 = -1; }
        else if (user_number2 == secret_number2) { total = total + 1; secret_number2 = -1; }
        else if (user_number2 == secret_number3) { total = total + 1; secret_number3 = -1; }

        if (user_number3 == secret_number1) { total = total + 1; secret_number1 = -1; }
        else if (user_number3 == secret_number2) { total = total + 1; secret_number2 = -1; }
        else if (user_number3 == secret_number3) { total = total + 1; secret_number3 = -1; }

        // Вывожу итог
        if (total == 3) {
            std::cout << "Вы угадали 3 числа, (но не на своих местах)!" << "\n" << "Поэтому вы выигрываете Суперприз! 🪙️" << std::endl;
        } else if (total == 2) {
            std::cout << "Вы угадали 2 числа" << "\n" << "Поэтому вы выигрываете Приз! 💵️" << std::endl;
        } else if (total == 1) {
            std::cout << "Вы угадали 1 число" << "\n" << "Поэтому вы получаете Утешительный приз! 🧿️" << std::endl;
        } else {
            std::cout << "Вы не сумели угадать числа, увы!" << "\n" << "Повезёт в следующий раз! 🗿️" << std::endl;
        }
    } 

    std::cout << "--------------------------------------------------------------------------------------"<< "\n" << "Лотерея окончена! Благодарим за игру! 👋" << std::endl;
    return 0;
}

#include <iostream>
#include <cstdlib> // для функции rand и srand
#include <ctime>   // для функции time

int main() {
    const int size = 10; // размер массива
    int mass[size];

    // Инициализация генератора случайных чисел текущим временем
    std::srand(static_cast<unsigned int>(std::time(0)));

    // Инициализация массива случайными числами от 0 до 99
    for (int i = 0; i < size; ++i) {
        mass[i] = std::rand() % 100; // случайное число от 0 до 99
    }

    // Вывод массива на экран
    for (int i = 0; i < size; ++i) {
        std::cout << mass[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}
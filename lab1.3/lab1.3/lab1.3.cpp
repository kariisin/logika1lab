#include <iostream>
#include <vector> // для использования std::vector
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Russian");

    int n;

    std::cout << "Введите размер массива: ";
    std::cin >> n; // Считываем размер массива

    // Проверяем, что размер положительный
    if (n <= 0) {
        std::cout << "Размер массива должен быть положительным!" << std::endl;
        return 1; // выход с ошибкой
    }

    // Создаем вектор заданного размера
    std::vector<int> mass(n);

    std::cout << "Введите " << n << " элементов массива:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> mass[i]; // Считываем элементы массива
    }

    // Вывод массива на экран
    std::cout << "Элементы массива:\n";
    for (int i = 0; i < n; ++i) {
        std::cout << mass[i] << " ";
    }

    std::cout << std::endl;

    return 0; // завершение программы
}
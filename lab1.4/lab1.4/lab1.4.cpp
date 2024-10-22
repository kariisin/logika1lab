#include <iostream>
#include <vector>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Russian");

    int rows, cols;

    std::cout << "Введите количество строк: ";
    std::cin >> rows;
    std::cout << "Введите количество столбцов: ";
    std::cin >> cols;

    // Создаем двумерный вектор (массив)
    std::vector<std::vector<int>> array(rows, std::vector<int>(cols));

    // Вводим элементы массива
    std::cout << "Введите элементы массива:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << "array[" << i << "][" << j << "] = ";
            std::cin >> array[i][j];
        }
    }

    // Вычисление сумм по столбцам
    std::vector<int> columnSums(cols, 0);

    for (int j = 0; j < cols; ++j) {
        for (int i = 0; i < rows; ++i) {
            columnSums[j] += array[i][j];
        }
    }

    // Вывод сумм по столбцам
    std::cout << "Суммы по столбцам:\n";
    for (int j = 0; j < cols; ++j) {
        std::cout << "Сумма столбца " << j << " = " << columnSums[j] << std::endl;
    }

    return 0;
}
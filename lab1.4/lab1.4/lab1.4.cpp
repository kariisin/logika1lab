#include <iostream>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Russian");

    int m, n;
    int** g;

  
    std::cout << "Введите количество строк: ";
    std::cin >> m;
    std::cout << "Введите количество столбцов: ";
    std::cin >> n;

    // Создаем двумерный массив
    g = (int**)malloc(m * sizeof(int*));
    for (int i = 0; i < m; i++) {
        g[i] = (int*)malloc(n * sizeof(int));
    }

    // Вводим элементы массива
    std::cout << "Введите элементы массива:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << "array[" << i << "][" << j << "] = ";
            std::cin >> g[i][j];
        }
    }

    // Вывод сумм по столбцам
    printf("\nСумма по столбцам: \n");
    for (int j = 0; j < n; j++) {
        int columnSums = 0;
        for (int i = 0; i < m; i++) {
            columnSums += g[i][j];
        }
        printf("Столбец %d: %d\n", j + 1, columnSums);
    }


    return 0;
}
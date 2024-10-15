#include <iostream>

int main()
{
    const int size = 5;
    int mass[size];

    std::cout << "Enter  " << size << "  array elements: ";
    for (int i = 0; i < size; ++i) {
        std::cin >> mass[i];
    }

    int max = mass[0];
    int min = mass[0];

    for (int i = 1; i < size; ++i) {
        if (mass[i] > max) {
            max = mass[i];

        }
        if (mass[i] < min) {
            min = mass[i];
        }
    }

    int dif = max - min;

    std::cout << "Deference max and min=" << dif << std::endl;

    return 0;
}
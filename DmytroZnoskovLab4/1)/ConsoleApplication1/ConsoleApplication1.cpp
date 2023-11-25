#include <iostream>
#include <Windows.h>
using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int maxSize = 100; // Максимальний розмір масиву
    int n, Z;

    // Введення розміру масиву
    std::cout << "Введіть розмір масиву (n): ";
    std::cin >> n;

    // Перевірка на коректність розміру масиву
    if (n <= 0 || n > maxSize) {
        std::cout << "Некоректний розмір масиву. Будь ласка, введіть розмір від 1 до " << maxSize << ".\n";
        return 1; // Помилка виконання програми
    }

    // Оголошення та ініціалізація масиву
    int arr[maxSize];

    // Введення елементів масиву
    for (int i = 0; i < n; ++i) {
        std::cout << "Введіть елемент масиву [" << i << "]: ";
        std::cin >> arr[i];
    }

    // Введення числа Z
    std::cout << "Введіть число Z: ";
    std::cin >> Z;

    // Обчислення кількості елементів масиву, які менше Z
    int count = 0;
    int i = 0;
    while (i < n) {
        if (arr[i] < Z) {
            count++;
        }
        i++;
    }

    // Виведення результату
    std::cout << "Кількість елементів масиву, які менше " << Z << ": " << count << std::endl;

    return 0;
}
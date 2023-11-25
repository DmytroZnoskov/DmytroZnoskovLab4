#include <iostream>
#include <algorithm>
#include<Windows.h>


int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
        
    const int maxSize = 100; // Максимальний розмір масиву
    int n;

    // Введення розміру масиву
    std::cout << "Введіть розмір масиву (n): ";
    std::cin >> n;

    // Перевірка на коректність розміру масиву
    if (n <= 0 || n > maxSize) {
        std::cout << "Некоректний розмір масиву. Будь ласка, введіть розмір від 1 до " << maxSize << ".\n";
        return 1; // Помилка виконання програми
    }

    // Оголошення та ініціалізація масиву
    double arr[maxSize];

    // Введення елементів масиву
    for (int i = 0; i < n; ++i) {
        std::cout << "Введіть речовий елемент масиву [" << i << "]: ";
        std::cin >> arr[i];
    }

    // Знаходимо максимальний елемент
    double maxElement = *std::max_element(arr, arr + n);

    // Сортуємо масив так, щоб спочатку розташовувалися всі елементи, що відрізняються від максимального не більше ніж на 20%
    std::sort(arr, arr + n, [maxElement](double a, double b) {
        return std::abs(a - maxElement) <= 0.2 * maxElement;
        });

    // Виведення результату
    std::cout << "Перетворений масив:\n";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }

    return 0;
}

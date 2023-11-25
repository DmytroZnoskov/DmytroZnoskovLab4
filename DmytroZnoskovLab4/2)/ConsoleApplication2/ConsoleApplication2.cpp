#include <iostream>
#include <Windows.h>

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
    int arr[maxSize];

    // Введення елементів масиву
    for (int i = 0; i < n; ++i) {
        std::cout << "Введіть елемент масиву [" << i << "]: ";
        std::cin >> arr[i];
    }

    // Знайдемо останній негативний елемент та обчислимо суму цілих частин елементів після нього
    int lastNegativeIndex = -1;
    for (int i = n - 1; i >= 0; --i) {
        if (arr[i] < 0) {
            lastNegativeIndex = i;
            break;
        }
    }

    if (lastNegativeIndex == -1) {
        std::cout << "У масиві немає негативних елементів.\n";
    }
    else {
        int sum = 0;
        for (int i = lastNegativeIndex + 1; i < n; ++i) {
            sum += static_cast<int>(arr[i]);
        }

        std::cout << "Сума цілих частин елементів, розташованих після останнього негативного: " << sum << std::endl;
    }

    return 0;
}
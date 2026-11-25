
#include <iostream>
#include <windows.h>
#include <random>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(0, 200);

    int numbers[25];

    // Заполнение массива случайными числами
    for (int i = 0; i < 25; i++) {
        numbers[i] = dist(gen);
    }

    // Вывод массива
    cout << "Массив:\n";
    for (int i = 0; i < 25; i++) {
        cout << numbers[i] << " ";
    }

    // Ввод заданной суммы
    int target;
    cout << "\n\nВведите заданную сумму: ";
    cin >> target;

    // Поиск всех пар
    bool found = false;

    cout << "\nНайденные пары:\n";

    for (int i = 0; i < 25; i++) {
        for (int j = i + 1; j < 25; j++) {
            if (numbers[i] + numbers[j] == target) {
                cout << numbers[i] << " + " << numbers[j]
                    << " = " << target << endl;

                found = true;
            }
        }
    }

    if (!found) {
        cout << "Подходящих пар не найдено.";
    }

    return 0;
}

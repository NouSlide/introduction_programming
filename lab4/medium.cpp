#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int count, num;

    float USD = 80.53f;
    float EUR = 89.70f;

    cout << "Введите цифру для выбора направления: 1-USD→RUB, 2-RUB→USD, 3-EUR→RUB, 4-RUB→EUR и затем сумму: ";

    while (!(cin >> count) || !(cin >> num) || (num < 0)) {
        cout << "Вы ввели неверные значения: ";
        cin.clear();
        std::cin.ignore((std::numeric_limits<std::streamsize>::max)(), '\n');
    }

    switch (count) {
    case 1: cout << "USD→RUB: " << static_cast<float>(num) * USD; break;
    case 2: cout << "RUB→USD: " << static_cast<float>(num) / USD; break;
    case 3: cout << "EUR→RUB: " << static_cast<float>(num) * EUR; break;
    case 4: cout << "RUB→EUR: " << static_cast<float>(num) / EUR; break;
    default: cout << "Вы ввели не верную цифру для выбора направления."; break;
    }

    return 0;
}

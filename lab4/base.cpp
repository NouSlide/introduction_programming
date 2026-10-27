#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n;

    cout << "Введите число игральной кости от 1 до 6: ";

    while (!(cin >> n) || (n < 1) || (n > 6)) {
        cout << "Вы ввели не число или вышли за диапазон: ";
        cin.clear();
        std::cin.ignore((std::numeric_limits<std::streamsize>::max)(), '\n');
    }

    switch (n) {
    case 1: cout << "One"; break;
    case 2: cout << "Two"; break;
    case 3: cout << "Tree"; break;
    case 4: cout << "Four"; break;
    case 5: cout << "Five"; break;
    case 6: cout << "Six"; break;
    }

    return 0;
}

#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    char let;
    int num;

    // Заданные координаты кораблей 
    string ship1 = "A1";
    string ship2 = "B3";
    string ship3 = "E6";

    cout << "Введите координаты выстрела через пробел(A-J; 1-10), например C 4: ";

    while (!(cin >> let) || !(cin >> num) || (let < 'A') || (let > 'J') || (num < 1) || (num > 10)) {
        cout << "Вы ввели неверные значения: ";
        cin.clear();
        std::cin.ignore((std::numeric_limits<std::streamsize>::max)(), '\n');
    }

    switch (let) {
    case 'A':
        switch (num) {
        case 1: cout << "Попадание!"; break;
        default: cout << "Не попал!"; break;
        }
        break;
    case 'B':
        switch (num) {
        case 3: cout << "Попадание!"; break;
        default: cout << "Не попал!"; break;
        }
        break;
    case 'E':
        switch (num) {
        case 6: cout << "Попадание!"; break;
        default: cout << "Не попал!"; break;
        }
        break;
    default: cout << "Не попал!"; break;
    }


    return 0;
}

#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double a, b, h;
    cout << "Введите начало интервала: ";
    cin >> a;
    cout << "Введите конец интервала: ";
    cin >> b;
    cout << "Введите шаг интервала: ";
    cin >> h;

    if (a > b || h <= 0) {
        std::cout << "Ошибка: a должно быть <= b, h > 0" << std::endl;
        return 1;
    }

    for (double x = a; x <= b; x += h) {
        int y = 7;
        cout << "y: " << y << " x: " << x << endl;
    }


    return 0;
}

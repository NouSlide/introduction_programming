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

    int r = 0;
    int c = 0;
    int first_s = 0;
    for (double x = a; x <= b; x += h) {
        double y = (x * x * x) - (3 * x * x) + (2 * x);
        cout << "x = " << x << " y = " << y << endl;
        c += 1;
        if (c == 1) {
            if (y >= 0) {
                first_s = 10;
            }
            else {
                first_s = -10;
            }
        }
        else if (c >= 2 && first_s == -10 && y > 0) {
            r += 1;
            first_s = 10;
        }
        else if (c >= 2 && first_s == 10 && y < 0) {
            r += 1;
            first_s = -10;
        }
        
    }
    cout << "Сколько раз поменяла знак: " << r << endl;
    return 0;
}

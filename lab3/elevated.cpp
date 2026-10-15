#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double a, b, c;

    cout << "Введите коэффициенты a, b, c: ";
    cin >> a >> b >> c;

    while (!(cin >> a) || !(cin >> b) || !(cin >> c)) {
        cout << "Вы ввели не числа: ";
        cin.clear();
        std::cin.ignore((std::numeric_limits<std::streamsize>::max)(), '\n');
    }

    if (a == 0 && b == 0 && c == 0) {
        cout << "Бесконечно много решений";
    }
    else if (a == 0 && b == 0) {
        cout << "Решений нет";
    }
    else if (a == 0) {
        cout << "x = " << -c / b;
    }
    else {
        double D = b * b - 4 * a * c;

        if (D > 0) {
            cout << "x1 = " << (-b + sqrt(D)) / (2 * a) << endl;
            cout << "x2 = " << (-b - sqrt(D)) / (2 * a);
        }
        else if (D == 0) {
            cout << "x = " << -b / (2 * a);
        }
        else {
            cout << "x1 = " << -b / (2 * a)
                << " + " << sqrt(-D) / (2 * abs(a)) << "i" << endl;

            cout << "x2 = " << -b / (2 * a)
                << " - " << sqrt(-D) / (2 * abs(a)) << "i";
        }
    }

    return 0;
}

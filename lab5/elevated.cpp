#include <iostream>
#include <iomanip>
#include <cmath>
#include <windows.h>
using namespace std;

// Функция для вычисления f(x)
double f(double x) {
    return 1.0 / x;
}

// Функция для вычисления интеграла
double Integral(double a, double b, double h) {
    double sum = 0;

    for (double x = a; x < b - 1e-9; x += h) {
        sum += f(x);
    }

    return sum * h;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double a, b, h;
    cout << "Введите начало интервала: ";
    cin >> a;

    cout << "Введите конец интервала: ";
    cin >> b;

    cout << "Введите шаг: ";
    cin >> h;

    if (h <= 0 || a >= b) {
        cout << "Ошибка ввода!";
        return 0;
    }

    if (a <= 0 && b > 0) {
        cout << "Ошибка: интервал содержит особую точку x = 0!";
        return 0;
    }

    double sum = 0;
    int count = 0;

    for (double x = a; x < b - 1e-9; x += h) {
        double y = f(x);

        cout << setw(10) << x << " | "
            << setw(10) << y << endl;

        sum += y;
        count++;
    }

    double result = Integral(a, b, h);

    cout << "\nРезультаты вычислений:\n";
    cout << "Сумма значений функции: " << sum << endl;
    cout << "Количество точек: " << count << endl;
    cout << "Значение интеграла: " << result << endl;

    return 0;
}

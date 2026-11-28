#include <iostream>
#include <windows.h>
#include <numbers>
using namespace std;

double circleArea(double radius) {
    double pi = numbers::pi;
    double S = pi * radius * radius;
    return S;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    double r;
    cout << "Введите радиус: ";
    cin >> r;

    cout << circleArea(r);

    return 0;
}

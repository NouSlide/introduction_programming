#include <iostream>
#include <windows.h>
using namespace std;

// Структура комплексного числа
struct Complex {
    double re;
    double im;
};

// Функция сложения
void add(Complex a, Complex b, Complex& result) {
    result.re = a.re + b.re;
    result.im = a.im + b.im;
}

// Функция вычитания
void subtract(Complex a, Complex b, Complex& result) {
    result.re = a.re - b.re;
    result.im = a.im - b.im;
}

// Функция умножения
void multiply(Complex a, Complex b, Complex& result) {
    result.re = a.re * b.re - a.im * b.im;
    result.im = a.re * b.im + a.im * b.re;
}

// Функция деления
void divide(Complex a, Complex b, Complex& result) {
    double denominator = b.re * b.re + b.im * b.im;

    if (denominator == 0) {
        cout << "Ошибка: деление на ноль!" << endl;
        return;
    }

    result.re = (a.re * b.re + a.im * b.im) / denominator;
    result.im = (a.im * b.re - a.re * b.im) / denominator;
}

// Функция вывода комплексного числа
void printComplex(Complex c) {
    cout << c.re;

    if (c.im >= 0) {
        cout << " + " << c.im << "i";
    }
    else {
        cout << " - " << -c.im << "i";
    }

    cout << endl;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    Complex a, b, result;

    cout << "Введите действительную и мнимую части первого числа: ";
    cin >> a.re >> a.im;

    cout << "Введите действительную и мнимую части второго числа: ";
    cin >> b.re >> b.im;

    cout << "\nПервое число: ";
    printComplex(a);

    cout << "Второе число: ";
    printComplex(b);

    add(a, b, result);
    cout << "\nСложение: ";
    printComplex(result);

    subtract(a, b, result);
    cout << "Вычитание: ";
    printComplex(result);

    multiply(a, b, result);
    cout << "Умножение: ";
    printComplex(result);

    cout << "Деление: ";
    divide(a, b, result);

    if (b.re != 0 || b.im != 0) {
        printComplex(result);
    }

    return 0;
}

#include <iostream>
#include <windows.h>
#include <string>
#include <numbers>
using namespace std;

int digitSum(int n) {
    if (n < 0) n = -n;
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n = n / 10;
    }
    return sum;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int n;
    cout << "Введите число: ";
    cin >> n;

    cout << digitSum(n);

    return 0;
}

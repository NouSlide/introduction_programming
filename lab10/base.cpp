#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

void zeroIfEven(int& value) {
    if (value % 2 == 0)
        value = 0;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int value;
    cout << "Введите число: ";
    cin >> value;
    zeroIfEven(value);
    cout << value << endl;

    return 0;
}

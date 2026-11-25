#include <iostream>
#include <windows.h>
#include <random>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::random_device rd;

    std::mt19937 gen(rd());

    std::uniform_int_distribution<int> dist(-30, 30);

    int numbers[5];
    for (int i = 0; i < 5; i++) {
        numbers[i] = dist(gen);
    }

    int count = 0;

    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << endl;
        if (numbers[i] < 0) {
            count += 1;
        };
    }

    cout << count;

    return 0;
}


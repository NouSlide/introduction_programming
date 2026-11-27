#include <iostream>
#include <windows.h>
#include <random>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    random_device rd;

    mt19937 gen(rd());

    uniform_int_distribution<int> dist(1, 100);

    int numbers[5][5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            numbers[i][j] = dist(gen);
        }
    }

    int k = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (k == 4) {
                cout << numbers[i][j] << endl;
                k = 0;
            }
            else if(k != 4) {
                cout << numbers[i][j] << " ";
                k += 1;
            }
        }
    }

    for (int i = 0; i < 5 / 2; i++) {
        for (int j = 0; j < 5; j++) {
            int temp = numbers[i][j];
            numbers[i][j] = numbers[4 - i][j];
            numbers[4 - i][j] = temp;
        }
    }

    cout << endl;

    int k2 = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (k2 == 4) {
                cout << numbers[i][j] << endl;
                k2 = 0;
            }
            else if (k2 != 4) {
                cout << numbers[i][j] << " ";
                k2 += 1;
            }
        }
    }

    return 0;
}

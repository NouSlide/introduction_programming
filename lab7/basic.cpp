#include <iostream>
#include <windows.h>
#include <random>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    random_device rd;

    mt19937 gen(rd());

    uniform_int_distribution<int> dist(-30, 30);

    int numbers[3][5];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            numbers[i][j] = dist(gen);
        }
    }

    int answer = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if (0 < numbers[i][j])
                answer += 1;
        }
    }

    cout << answer;

    return 0;
}

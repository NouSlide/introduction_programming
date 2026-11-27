#include <iostream>
#include <windows.h>
#include <random>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    random_device rd;

    mt19937 gen(rd());

    uniform_int_distribution<int> dist(0, 100);

    int numbers[4][5];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            numbers[i][j] = dist(gen);
        }
    }

    int answer = 100000;
    int s1 = 0;
    int s2 = 0;
    int s3 = 0;
    int s4 = 0;
    int s5 = 0;
    int j = 0;

    for (int i = 0; i < 4; i++) {
        s1 += numbers[i][0];
    }

    for (int i = 0; i < 4; i++) {
        s2 += numbers[i][1];
    }

    for (int i = 0; i < 4; i++) {
        s3 += numbers[i][2];
    }

    for (int i = 0; i < 4; i++) {
        s4 += numbers[i][3];
    }

    for (int i = 0; i < 4; i++) {
        s5 += numbers[i][4];
    }

    int sums[5] = { s1, s2, s3, s4, s5 };

    for (int i = 0; i < 5; i++) {
        if (sums[i] < answer) {
            answer = sums[i];
            j = i + 1;
        }
    }

    cout << "Summ: " << answer << endl << "Столбец: " << j;

    return 0;
}

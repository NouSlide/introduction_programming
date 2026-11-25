#include <iostream>
#include <windows.h>
#include <random>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::random_device rd;

    std::mt19937 gen(rd());

    std::uniform_int_distribution<int> dist(0, 100);

    int numbers[20];
    for (int i = 0; i < 5; i++) {
        numbers[i] = dist(gen);
    }

    float count_num = 0;
    float sum = 0;


    for (int i = 0; i < 5; i++) {
        sum += numbers[i];
        count_num += 1.0;
    }

    float sr = sum / count_num;
    int count = 0;
    for (int i = 0; i < 5; i++) {
        if (numbers[i] > sr) {
            count += 1;
        };
    }

    cout << count;

    return 0;
}

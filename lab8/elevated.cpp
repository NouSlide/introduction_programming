#include <iostream>
#include <windows.h>
#include <string>
#include <algorithm>
using namespace std;

bool isAnagramSorted(std::string a, std::string b) {
    if (a.size() != b.size()) {
        return false;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string a;
    string b;
    cout << "Введите две строки через пробел на латинице: ";
    cin >> a;
    cin >> b;

    cout << boolalpha << isAnagramSorted(a, b) << endl;

    return 0;
}

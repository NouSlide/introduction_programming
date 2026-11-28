#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

void removeSpaces(string& str) {
    string res;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ') {
            res += str[i];
        }
    }
    str = res;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    string str;
    cout << "Введите строку на латинице: ";
    getline(cin, str);

    removeSpaces(str);

    cout << str << endl;

    return 0;
}

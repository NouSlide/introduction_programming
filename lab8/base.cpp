#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    cout << "Введите строку на латинице: ";

    string s;
    getline(cin, s);

    int ans = 0;

    for (int i = 0; i <= s.length(); i++) {
        if (s[i] != ' ' && isalpha(s[i]))
            ans += 1;
    }

    cout << ans;

    return 0;
}

#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

bool isPalindrome(const string& s) {
    int left = 0;
    int right = s.length() - 1;
    while (left < right) {
        while (left < right && !isalnum(s[left])) {
            left++;
        }
        while (left < right && !isalnum(s[right])) {
            right--;
        }
        if (tolower(s[left]) != tolower(s[right])) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string original;
    cout << "Введите строку на кириллице: ";
    getline(cin, original);

    if (isPalindrome(original)) {
        cout << "\nСтрока является палиндромом!" << endl;
    }
    else {
        cout << "\nСтрока не является палиндромом." << endl;
    }

    return 0;
}

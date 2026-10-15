#include <iostream>
#include <windows.h>

using namespace std;

int main() {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	int num1, num2;
	cout << "Введите числа через пробел: ";

	while (!(cin >> num1) || !(cin >> num2)) {
		cout << "Вы ввели не числа: ";
		cin.clear();
		std::cin.ignore((std::numeric_limits<std::streamsize>::max)(), '\n');
	}

	if (num1 == num2)
		cout << "Равны";
	else
		cout << "Не равны";

	return 0;
}

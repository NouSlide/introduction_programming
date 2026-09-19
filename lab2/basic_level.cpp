#include <iostream>
#include <windows.h>

using namespace std;

int main() {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	float num;
	cout << "Введите число: ";

	while (!(cin >> num)) {
		cout << "Вы ввели не число: ";
		cin.clear();
		std::cin.ignore((std::numeric_limits<std::streamsize>::max)(), '\n');
	}

	auto result = num * num;
	cout << "Квадрат числа: " << result;

	return 0;
}

#include <iostream>
#include <windows.h>

using namespace std;

int main() {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	int sec;
	cout << "Введите кол-во секунд: ";

	while (!(cin >> sec)) {
		cout << "Вы ввели не число: ";
		cin.clear();
		std::cin.ignore((std::numeric_limits<std::streamsize>::max)(), '\n');
	}

	auto hours = sec / 3600;
	cout << "Результат в часах(целое): " << hours << endl << "и остаток от деления: " << sec % 3600 << endl;

	return 0;
}

#include <iostream>
#include <windows.h>
#include <cmath> // подключаем библиотеку для тригонометрических ф-ий
#include <numbers> // подключаем библиотеку для числа PI

using namespace std;

int main() {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	double deg;
	const double PI = numbers::pi;

	cout << "Введите градус: ";
	
	while (!(cin >> deg)) {
		cout << "Вы ввели отрицательное значение градусов: ";
		cin.clear();
		std::cin.ignore((std::numeric_limits<std::streamsize>::max)(), '\n');
	}

	double radians = deg * (PI / 180.0); // переводим градусы в радианы

	cout << "sin " << deg << "° равен: " << sin(radians) << endl;
	cout << "cos " << deg << "° равен: " << cos(radians) << endl;
	cout << "tg " << deg << "° равен: " << tan(radians) << endl;

	return 0;
}

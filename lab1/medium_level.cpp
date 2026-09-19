#include <iostream>
#include <limits> // для std::numeric_limits
#include <windows.h> // для работы с кодировкой

int main() {
	SetConsoleOutputCP(CP_UTF8); // подключаем русский язык
	SetConsoleCP(CP_UTF8);

	int number;
	std::cout << "Введите число: ";
	std::cin >> number;

	while (!(std::cin >> number)) {
		std::cout << "Введите число, а не буквы: ";
		std::cin.clear(); // очищаем состояние ошибки
		std::cin.ignore((std::numeric_limits<std::streamsize>::max)(), '\n'); // убираем все символы
	}
	std::cout << "Квадрат вашего числа: " << number * number << std::endl;
	std::cout << "Куб вашего числа: " << number * number * number;

	return 0;
}

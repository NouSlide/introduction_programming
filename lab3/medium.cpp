#include <iostream>
#include <windows.h>

using namespace std;

int main() {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	int grade;
	cout << "Введите оценку от 0 до 100: ";

	while (!(cin >> grade) || grade > 100 || grade < 0) {
		cout << "Вы ввели не число или вышли за диапазон: ";
		cin.clear();
		std::cin.ignore((std::numeric_limits<std::streamsize>::max)(), '\n');
	}

	if (grade >= 90)
		cout << "A";

	else if (75 <= grade)
		cout << "B";

	else if (60 <= grade)
		cout << "C";

	else if (50 <= grade)
		cout << "D";

	else if (grade < 50)
		cout << "F";

	return 0;
}

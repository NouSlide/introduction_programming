#include <iostream>
#include <limits> // для std::numeric_limits
#include <windows.h> // для работы с кодировкой
#include <cmath> // для корня

int main() {
    SetConsoleOutputCP(CP_UTF8); // подключаем русский язык
    SetConsoleCP(CP_UTF8);

    float leg1, leg2;
    bool check = true; // положительные ли катеты

    std::cout << "Введите два катета через пробел: ";

    while (!(std::cin >> leg1 >> leg2) || leg1 <= 0 || leg2 <= 0) {
        std::cout << "Вы ввели некорректные данные. Введите два катета через пробел: ";

        std::cin.clear(); // Сбрасываем ошибку

        // Очищаем весь накопившийся некорректный ввод до конца строки
        std::cin.ignore((std::numeric_limits<std::streamsize>::max)(), '\n');
    }

    float hypotenuse = sqrt(leg1 * leg1 + leg2 * leg2);
    float P = leg1 + leg2 + hypotenuse;
    float S = (leg1 * leg2)/2;

    std::cout << "Площадь вашего треугольника: " << S << std::endl << "Периметр вашего треугольника: " << P;


    return 0;
}

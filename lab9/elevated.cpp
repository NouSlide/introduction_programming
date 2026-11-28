#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

// Функция добавления студента
void addStudent(string names[], int ages[], string groups[], int& count) {
    cout << "Введите имя студента: ";
    getline(cin >> ws, names[count]);

    cout << "Введите возраст: ";
    cin >> ages[count];

    cout << "Введите группу: ";
    getline(cin >> ws, groups[count]);

    count++;

    cout << "Студент добавлен!\n";
}

// Функция вывода списка студентов
void showStudents(string names[], int ages[], string groups[], int count) {
    if (count == 0) {
        cout << "Список студентов пуст.\n";
        return;
    }

    for (int i = 0; i < count; i++) {
        cout << "\nСтудент №" << i + 1 << endl;
        cout << "Имя: " << names[i] << endl;
        cout << "Возраст: " << ages[i] << endl;
        cout << "Группа: " << groups[i] << endl;
    }
}

// Функция поиска студентов по группе
void searchByGroup(string names[], int ages[], string groups[], int count) {
    string searchGroup;
    bool found = false;

    cout << "Введите группу для поиска: ";
    getline(cin >> ws, searchGroup);

    for (int i = 0; i < count; i++) {
        if (groups[i] == searchGroup) {
            cout << "\nИмя: " << names[i] << endl;
            cout << "Возраст: " << ages[i] << endl;
            cout << "Группа: " << groups[i] << endl;

            found = true;
        }
    }

    if (!found) {
        cout << "Студенты не найдены.\n";
    }
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    const int MAX = 100;

    string names[MAX];
    int ages[MAX];
    string groups[MAX];

    int count = 0;
    int choice;

    do {
        cout << "\n===== СИСТЕМА УПРАВЛЕНИЯ СТУДЕНТАМИ =====\n";
        cout << "1. Добавить студента\n";
        cout << "2. Вывести список студентов\n";
        cout << "3. Поиск по группе\n";
        cout << "0. Выход\n";
        cout << "Выберите действие: ";

        cin >> choice;

        switch (choice) {
        case 1:
            if (count < MAX) {
                addStudent(names, ages, groups, count);
            }
            else {
                cout << "Достигнут лимит студентов!\n";
            }
            break;

        case 2:
            showStudents(names, ages, groups, count);
            break;

        case 3:
            searchByGroup(names, ages, groups, count);
            break;

        case 0:
            cout << "Программа завершена.\n";
            break;

        default:
            cout << "Неверный выбор!\n";
        }

    } while (choice != 0);

    return 0;
}

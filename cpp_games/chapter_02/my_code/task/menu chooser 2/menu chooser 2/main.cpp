#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	int choice;

	do {
		cout << "Уровень сложности" << endl;
		cout << "0 выход" << endl;
		cout << "1 Лёгки" << endl;
		cout << "2 Нормальный" << endl;
		cout << "3 Тяжёлый" << endl;

		cout << "Выбор ";
		cin >> choice;

		if (choice == 0) {
			cout << "Вы вышли из игры" << endl;
			break;
		}

		switch (choice) {
		case 1:
			cout << "вы выбрали лёгкий уровень" << endl;
			break;
		case 2:
			cout << "вы выбрали нормальный уровень" << endl;
			break;
		case 3:
			cout << "вы выбрали тяжёлый уровень" << endl;
			break;
		default:
			cout << "вы сделали непонятный выбор" << endl;
		}
	} while (choice != 0);

	return 0;
}
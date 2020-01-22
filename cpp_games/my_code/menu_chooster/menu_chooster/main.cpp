#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	//Difficulty Levels
	cout << "Уровень сложности\n";
	cout << "1 - Лёгкий\n";
	cout << "2 - Нормальный\n";
	cout << "3 - Сложный\n";

	int choice;
	cout << "Choice: ";
	cin >> choice;

	switch (choice) {
	case 1:
		//You picked Easy
		cout << "Вы выбрали Лёгкий уровень\n";
		break;
	case 2:
		//You picked Normal
		cout << "Вы выбрали Нормальный уровень\n";
		break;
	case 3:
		//You picked Hard
		cout << "Вы выбрали сложный уровень\n";
		break;
	default:
		//You made an
		cout << "Вы сделали ошибку";
	}
	return 0;
}
#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	//Difficulty Levels
	cout << "������� ���������\n";
	cout << "1 - ˸����\n";
	cout << "2 - ����������\n";
	cout << "3 - �������\n";

	int choice;
	cout << "Choice: ";
	cin >> choice;

	switch (choice) {
	case 1:
		//You picked Easy
		cout << "�� ������� ˸���� �������\n";
		break;
	case 2:
		//You picked Normal
		cout << "�� ������� ���������� �������\n";
		break;
	case 3:
		//You picked Hard
		cout << "�� ������� ������� �������\n";
		break;
	default:
		//You made an
		cout << "�� ������� ������";
	}
	return 0;
}
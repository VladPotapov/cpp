#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	int choice;

	do {
		cout << "������� ���������" << endl;
		cout << "0 �����" << endl;
		cout << "1 ˸���" << endl;
		cout << "2 ����������" << endl;
		cout << "3 ������" << endl;

		cout << "����� ";
		cin >> choice;

		if (choice == 0) {
			cout << "�� ����� �� ����" << endl;
			break;
		}

		switch (choice) {
		case 1:
			cout << "�� ������� ����� �������" << endl;
			break;
		case 2:
			cout << "�� ������� ���������� �������" << endl;
			break;
		case 3:
			cout << "�� ������� ������ �������" << endl;
			break;
		default:
			cout << "�� ������� ���������� �����" << endl;
		}
	} while (choice != 0);

	return 0;
}
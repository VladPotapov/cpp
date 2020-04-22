#include <iostream>
#include <cstdlib>
#include <Windows.h>

using namespace std;

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int number;
	int comp_number = 0;
	int attempts = 0;

	cout << "��������� ����� �� 1 �� 100 ";
	cin >> number;

	while (number != comp_number) {
		attempts++;
		comp_number = rand() % 100 + 1;
		if (comp_number < number) {
			cout << comp_number << endl;
			cout << "��������� �����" << endl;
		}
		else if (comp_number > number) {
			cout << comp_number << endl;
			cout << "������� �����" << endl;
		}
		else {
			cout << "��� ����� " << comp_number << endl;
			cout << "������� �������������� ����������: " << attempts;
		}
	}

	return 0;
}
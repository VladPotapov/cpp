//Guess my number
//������ ��������� �����

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	srand(static_cast<unsigned int>(time(0)));

	int secretNumber = rand() % 100 + 1;
	int tries = 0;
	int guess;

	cout << "����� ���������� � ���� \"������ �����\"" << endl;

	do {
		cout << "������� ����� ";
		cin >> guess;
		++tries;

		if (guess > secretNumber) {
			cout << "���������� ����� ������\n";
		}
		else if (guess < secretNumber) {
			cout << "���������� ����� ������\n";
		}
		else {
			cout << "�����������, ��� ������������� " << secretNumber << endl;
			cout << "��� ������������ " << tries << " �������\n";
		}
	} while (guess != secretNumber);
}
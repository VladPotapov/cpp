#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int my_number;
	cout << "��������� ����� �� 0 �� 100: ";
	cin >> my_number;
	int comp_number = 0;
	int popitka = 0;
	while (my_number != comp_number) {
		comp_number = rand() % 100 + 1;
		popitka = popitka + 1;
		cout << "������� " << popitka << endl;
		if (comp_number > my_number) {
			cout << "����� " << comp_number << " ������ " << my_number << endl;
		}
		if (comp_number < my_number) {
			cout << "����� " << comp_number << " ������ " << my_number << endl;
		}
	}
	cout << "�������� ������ ����� �� " << popitka << " �������" << endl;
	cout << "��� ����� " << comp_number << endl;
	return 0;
}
#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "������ ������:\n";
	for (int i = 0; i < 10; ++i) {
		cout << i << " ";
	}
	cout << "\n\n������ �����:\n";
	for (int i = 9; i >= 0; --i) {
		cout << i << " ";
	}
	cout << "\n\n������ �� 5:\n";
	for (int i = 0; i <= 50; i += 5) {
		cout << i << " ";
	}
	cout << "\n\n������� � ���������� ������� for:\n";
	int num = 0;
	for (; num < 10;) {
		cout << num << " ";
		num++;
	}
	return 0;
}
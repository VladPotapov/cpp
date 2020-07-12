#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "отсчет вперед:\n";
	for (int i = 0; i < 10; ++i) {
		cout << i << " ";
	}
	cout << "\n\nотсчёт назад:\n";
	for (int i = 9; i >= 0; --i) {
		cout << i << " ";
	}
	cout << "\n\nотсчёт по 5:\n";
	for (int i = 0; i <= 50; i += 5) {
		cout << i << " ";
	}
	cout << "\n\nподсчет с статическим оператором:\n";
	int num = 0;
	for (; num < 10;) {
		cout << num << " ";
		++num;
	}
	cout << "\n\nподсчет с вложенными циклами for:\n";
	const int ROWS = 5;
	const int COLUMNS = 3;
	const int TABS = 2;
	for (int i = 0; i < ROWS; ++i) {
		for (int j = 0; j < COLUMNS; ++j) {
			cout << i << " : " << j << " ; ";
		}
		cout << endl;
	}
	return 0;
}
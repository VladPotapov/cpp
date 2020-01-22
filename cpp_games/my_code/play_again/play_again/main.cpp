#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	char again;

	do {
		cout << "\n**Хотите сыграть ещё раз?**";
		cout << "\nВыберите y или n ";
		cin >> again;
	} while (again == 'y');

	cout << "Пока";

	return 0;
}
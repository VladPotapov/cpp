#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	char again;

	do {
		cout << "\n**������ ������� ��� ���?**";
		cout << "\n�������� y ��� n ";
		cin >> again;
	} while (again == 'y');

	cout << "����";

	return 0;
}
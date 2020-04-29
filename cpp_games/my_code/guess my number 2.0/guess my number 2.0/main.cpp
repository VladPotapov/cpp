#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int my_number;
	cout << "Загадайте число от 0 до 100: ";
	cin >> my_number;
	int comp_number = 0;
	int popitka = 0;
	while (my_number != comp_number) {
		comp_number = rand() % 100 + 1;
		popitka = popitka + 1;
		cout << "Попытка " << popitka << endl;
		if (comp_number > my_number) {
			cout << "Число " << comp_number << " больше " << my_number << endl;
		}
		if (comp_number < my_number) {
			cout << "Число " << comp_number << " меньше " << my_number << endl;
		}
	}
	cout << "Копьютер угадал число за " << popitka << " попыток" << endl;
	cout << "Это число " << comp_number << endl;
	return 0;
}
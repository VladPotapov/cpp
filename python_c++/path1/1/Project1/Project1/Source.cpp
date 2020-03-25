#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	cout << "Я программист" << endl;
	cout << "Привет" << "Мир\n";
	cout << "Привет" << endl << "Народ";

	//одиночный символ записывается в кавычки
	cout << "Hello" << '!' << endl;
	cin.get();
}
#include <iostream>
#include <Windows.h>
//windows для работы с языками

using namespace std;
int main() {
	//setlocale(LC_ALL, "Russian");
	//для русскоязычной раскладке
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string name;
	int houses;
	float weight;
	char grade;
	//what is your name?
	cout << "как тебя зовут? ";
	cin >> name;
	//Hi
	cout << "Привет " << name << "!" << endl;

	weight = 45;	//45,0
	houses = 'A';	//Символ A храниться в памяти как числовой код 65
	name = 'Э';	//Э
	grade = 65;	//A
	
	cout << weight << endl;
	cout << houses << endl;
	cout << name << endl;
	cout << grade << endl;

	int num1 = 123, num2 = 456;
	cout << num1 + num2 << endl;

	int n1, n2, s;
	cin >> n1 >> n2;
	s = n1 + n2;
	cout << s << endl;

	int numX, numY, numZ;
	cout << "Введите 2 числа";
	cin >> numX >> numY;
	numZ = numX + numY;
	cout << numX << "+" << numY << "=" << numZ;
	cin.get();
	return 0;
}
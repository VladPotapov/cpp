#include <iostream>
#include <Windows.h>
//windows ��� ������ � �������

using namespace std;
int main() {
	//setlocale(LC_ALL, "Russian");
	//��� ������������� ���������
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string name;
	int houses;
	float weight;
	char grade;
	//what is your name?
	cout << "��� ���� �����? ";
	cin >> name;
	//Hi
	cout << "������ " << name << "!" << endl;

	weight = 45;	//45,0
	houses = 'A';	//������ A ��������� � ������ ��� �������� ��� 65
	name = '�';	//�
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
	cout << "������� 2 �����";
	cin >> numX >> numY;
	numZ = numX + numY;
	cout << numX << "+" << numY << "=" << numZ;
	cin.get();
	return 0;
}
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	
	/*����� �� �������� ����� ���������� �����
	�� ���������� ������, ������ ���� ������
	������� � ���������� �����
	� ������� ������ ��������� ���� � �������*/
	srand(static_cast<unsigned int>(time(0)));

	//��������� �����
	//rand() �� ��������� ���������
	//rand(x, y) Error
	int randomNumber = rand();
	//����� ����� �� 1 �� 6
	int die = (randomNumber % 6) + 1;

	cout << "�� �������� ����� " << die << endl;

	//����������� ����� rand()
	cout << RAND_MAX << endl;

	return 0;
}
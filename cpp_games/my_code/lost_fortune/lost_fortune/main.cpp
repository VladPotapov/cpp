#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
	const int GOLD_PIECES = 900;
	int adventurers, killed, survivors;
	string leader;

	setlocale(LC_ALL, "Russian");
	cout << "����� ���������� � ���� ";
	cout << "������� ��������\n";
	cin >> adventurers;
	
	cout << "������� ����� ������ ������� ";
	cin >> killed;
	survivors = adventurers - killed;
	cout << "���� ��� ";
	cin >> leader;

	//�������� �������
	/*
	������� ������ adventures ���������� � �����
	- � ������� ���������� �������� ������� ������.
	*/
	
	cout << "������� ������ " << adventurers << " ����������� � ����� ";
	cout << "-- � ������� ����������� ��������� ������� ������. ";
	cout << "������ ���������� ���� ����������� �����, " << leader << ".\n";
	cout << "\n�� ���� ������ ��������������� ����� �������� ������ �� ����������." << "\n";
	cout << "��� ������ ��������� ��� ������������� " << leader << ".\n";
	cout << "� ���� ���� ���������, �� �����. " << "\n";
	cout << "������������, " << killed << " ���� ���������, ";
	cout << "�������� ������ " << survivors << " � ������" << "\n";

	cout << "������ ���������� ���������� � ��������." << "\n";
	cout << "�� ��� ������� �������, ";
	cout << "��� ���������� �� ������������ ���������." << "\n";
	cout << "��� ����� �������, �������� ����������� ��������� " << GOLD_PIECES << "������� ������." << "\n";
	cout << leader << " ��������� �� ��� " << (GOLD_PIECES % survivors) << endl;
	cout << "�������, ����� ������� ���� ������, �������." << endl;

	return 0;
}
#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string word1 = "Game";
	string word2("Over");
	string word3(3, '!');
	string phrase = word1 + " " + word2 + word3;
	cout << "��� ����� ������ ���: " << phrase << endl;
	cout << "��� ����� ����� � ����: " << phrase.size() << " �������� " << endl;
	cout << "������ � ������� 0: " << phrase[0] << endl;
	cout << "��������� ������� � ������� " << endl;
	phrase[0] = 'L';

	return 0;
}
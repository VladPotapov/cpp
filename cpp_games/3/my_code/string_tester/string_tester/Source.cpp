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
	cout << "��� ����� ������ ������ ���: " << phrase << endl;
	for (unsigned int i = 0; i < phrase.size(); ++i) {
		cout << "������ �� �������" << i << " = " << phrase[i] << endl;
	}
	cout << "������������������ 'Over' ���������� � ��������������\n";
	cout << phrase.find("Over") << endl;
	if (phrase.find("eggplant") == string::npos) {
		cout << "��������� ��� �� �����\n\n";
	}
	phrase.erase(4, 5);
	cout << "��� ����� ������ ������: " << phrase << endl;
	phrase.erase(4);
	cout << "��� ����� ������ ������: " << phrase << endl;
	phrase.erase();
	cout << "��� ����� ������ ������: " << phrase << endl;
	if (phrase.empty()) {
		cout << "���� ����� ������ ���.\n";
	}
	return 0;
}
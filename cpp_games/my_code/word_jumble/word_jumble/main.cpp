// game word jumble
// ���� �����������, � ������� ������������ ����������� �����
// versioon 1.0
#include <Windows.h>
#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	enum fields {WORD, HINT, NUM_FIELDS};
	const int NUM_WORDS = 5;
	const string WORDS[NUM_WORDS][NUM_FIELDS] = {
		{"�����", "�� ����������, ��� ������� ������� ��� ���-��?"},
		{"����", "��� ����� ������ ��� ������ �����"},
		{"���������", "��� ����� ������ ��� ������� �����"},
		{"������", "��� ��������"},
		{"�����������", "����������� � ��� �� ����"}
	};

	// ������� ��������� �����
	srand(static_cast<unsigned int>(time(0)));
	int choice = (rand() % NUM_WORDS);
	// ����� ������� ���� ��������
	string theWord = WORDS[choice][WORD];
	string theHint = WORDS[choice][HINT];

	// �������������
	// ����������� ������� �����
	string jumble = theWord;
	int length = jumble.size();
	for (int i = 0; i < length; i++) {
		int index1 = (rand() % length);
		int index2 = (rand() % length);
		char temp = jumble[index1];
		jumble[index1] = jumble[index2];
		jumble[index2] = temp;
	}

	cout << "\t\t\t����� ���������� � word jumble!\n\n";
	cout << "����������� �����, ����� ��������� �����\n";
	cout << "������� ����� ���������, ���� �������� ���������\n";
	cout << "������� ����� ����� ����� �� ����\n";
	cout << "������������ �����: " << jumble << endl;
	
	string quess;
	cout << "������� ��� �������: ";
	cin >> quess;

	while ((quess != theWord) && (quess != "�����")) {
		if (quess == "���������") {
			cout << theHint << endl;
		}
		else {
			cout << "����� �� ����������\n";
		}

		cout << "���������� ��� ���: ";
		cin >> quess;
	}

	if (quess == theWord) {
		cout << "\n�� �������!\n";
		cout << "��� " << theWord << endl;
	}

	return 0;
}
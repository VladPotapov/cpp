#include <Windows.h>
#include <iostream>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string word1 = "�����";
	char word2[] = " ����!!!";
	string phrase = word1 + word2;

	if (word1 != word2) {
		cout << "word1 � word2 �� �����" << endl;
	}
	if (phrase.find(word2) != string::npos) {
		cout << "word2 ���������� �� phrase\n";
	}

	return 0;
}
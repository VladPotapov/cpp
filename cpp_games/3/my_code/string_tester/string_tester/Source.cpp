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
	cout << "Эта фраза звучит так: " << phrase << endl;
	cout << "Эта фраза имеет в себе: " << phrase.size() << " символов " << endl;
	cout << "Символ в позиции 0: " << phrase[0] << endl;
	cout << "Изменение символа в позиции " << endl;
	phrase[0] = 'L';

	return 0;
}
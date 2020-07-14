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
	cout << "Эта фраза звучит сейчас как: " << phrase << endl;
	for (unsigned int i = 0; i < phrase.size(); ++i) {
		cout << "Символ на позиции" << i << " = " << phrase[i] << endl;
	}
	cout << "Последовательность 'Over' начинается в местоположении\n";
	cout << phrase.find("Over") << endl;
	if (phrase.find("eggplant") == string::npos) {
		cout << "баклажана нет во фразе\n\n";
	}
	phrase.erase(4, 5);
	cout << "Эта фраза звучит сейчас: " << phrase << endl;
	phrase.erase(4);
	cout << "Эта фраза звучит сейчас: " << phrase << endl;
	phrase.erase();
	cout << "Эта фраза звучит сейчас: " << phrase << endl;
	if (phrase.empty()) {
		cout << "Этой фразы больше нет.\n";
	}
	return 0;
}
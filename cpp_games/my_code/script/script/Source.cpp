#include <iostream>
using namespace std;

int main() {
	string word1 = "Game";
	string word2("Over");
	string word3(3, '!');
	string phrase = word1 + " " + word2 + word3;

	cout << phrase << endl;
	cout << phrase.size() << endl;	//12
	cout << phrase.length() << endl;	//12

	//в отличие от python в C++ строку можно редактировать
	//один символ нужно брать в одинарные кавычки
	phrase[0] = 'L';
	cout << "phrase[0] = " << phrase[0] << endl;

	for (int i = 0; i < phrase.length(); ++i) {
		cout << phrase[i];
	}

	cout << endl;
	cout << phrase.find("L") << endl;

	if (phrase.find("eggpland") == string::npos) {
		cout << "'eggpland' is not in the phrase.\n\n";
	}

	int location = phrase.find('L', 3);

	cout << location << endl;

	return 0;
}
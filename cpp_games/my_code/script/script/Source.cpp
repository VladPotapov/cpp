#include <Windows.h>
#include <iostream>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string word1 = "Конец";
	char word2[] = " игры!!!";
	string phrase = word1 + word2;

	if (word1 != word2) {
		cout << "word1 и word2 не равны" << endl;
	}
	if (phrase.find(word2) != string::npos) {
		cout << "word2 содержится во phrase\n";
	}

	return 0;
}
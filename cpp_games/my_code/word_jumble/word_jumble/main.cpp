// game word jumble
// игра головоломка, в которой пользователь разгадывает слово
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
		{"стена", "вы чувствуете, что бьетесь головой обо что-то?"},
		{"очки", "это может помочь вам видеть лучше"},
		{"подсказка", "это может помочь вам увидеть ответ"},
		{"тяжёлый", "идёт медленно"},
		{"настойчивый", "продолжайте в том же духе"}
	};

	// выбрать случайное слово
	srand(static_cast<unsigned int>(time(0)));
	int choice = (rand() % NUM_WORDS);
	// слово которое надо отгадать
	string theWord = WORDS[choice][WORD];
	string theHint = WORDS[choice][HINT];

	// перемешивание
	// перемешаный вариант слова
	string jumble = theWord;
	int length = jumble.size();
	for (int i = 0; i < length; i++) {
		int index1 = (rand() % length);
		int index2 = (rand() % length);
		char temp = jumble[index1];
		jumble[index1] = jumble[index2];
		jumble[index2] = temp;
	}

	cout << "\t\t\tдобро пожаловать в word jumble!\n\n";
	cout << "расшифруйте буквы, чтобы составить слово\n";
	cout << "Введите слово подсказка, чтоб получить подсказку\n";
	cout << "введите выход чтобы выйти из игры\n";
	cout << "перемешанное слово: " << jumble << endl;
	
	string quess;
	cout << "введите ваш вариант: ";
	cin >> quess;

	while ((quess != theWord) && (quess != "выход")) {
		if (quess == "подсказка") {
			cout << theHint << endl;
		}
		else {
			cout << "Ответ не правильный\n";
		}

		cout << "Попробуйте ещё раз: ";
		cin >> quess;
	}

	if (quess == theWord) {
		cout << "\nВы угадали!\n";
		cout << "Это " << theWord << endl;
	}

	return 0;
}
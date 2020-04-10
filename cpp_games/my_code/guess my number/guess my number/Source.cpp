//Guess my number
//угадай случайное число

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	srand(static_cast<unsigned int>(time(0)));

	int secretNumber = rand() % 100 + 1;
	int tries = 0;
	int guess;

	cout << "Добро пожаловать в игру \"угодай число\"" << endl;

	do {
		cout << "введите ответ ";
		cin >> guess;
		++tries;

		if (guess > secretNumber) {
			cout << "загаданное число меньше\n";
		}
		else if (guess < secretNumber) {
			cout << "загаданное число больше\n";
		}
		else {
			cout << "Поздравляем, это действительно " << secretNumber << endl;
			cout << "вам понадобилось " << tries << " попыток\n";
		}
	} while (guess != secretNumber);
}
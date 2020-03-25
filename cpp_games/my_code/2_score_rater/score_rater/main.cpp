#include <iostream>

using namespace std;

int main() {
	if (true) {
		//Это всегда отображается
		cout << "This is always displayed\n\n";
	}

	if (false) {
		//Это никогда не отображается
		cout << "This is newer displayed\n\n";
	}

	int score = 1000;

	if (score) {
		//По крайней мере ты не набрал ноль очков
		cout << "At least you didn't score zero\n\n";
	}

	if (score >= 250) {
		//Вы набрали 250 и более. Приличный
		cout << "You scored 250 or more. Decent\n\n";
	}

	if (score >= 500) {
		//Отличный
		cout << "You scored 500 or more. Nice\n\n";

		if (score >= 1000) {
			//Впечатляющий
			cout << "You scored 500 or more. Impressive\n\n";
		}
	}
	return 0;
}
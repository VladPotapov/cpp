#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	
	/*чтобы не выпадала серия одинаковых чисел
	из случайного списка, делаем чтоб список
	читался с случайного места
	с помощью выпада случайной даты и времени*/
	srand(static_cast<unsigned int>(time(0)));

	//случайное число
	//rand() не принимает аргуметов
	//rand(x, y) Error
	int randomNumber = rand();
	//выбор числа от 1 до 6
	int die = (randomNumber % 6) + 1;

	cout << "Вы выкинули число " << die << endl;

	//масимальное число rand()
	cout << RAND_MAX << endl;

	return 0;
}
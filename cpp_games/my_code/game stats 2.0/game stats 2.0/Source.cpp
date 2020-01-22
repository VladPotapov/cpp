#include <iostream>
using namespace std;

int main() {
	unsigned int score = 5000;
	cout << "score: " << score << endl;
	score = score + 100;
	cout << "score: " << score << endl;
	score += 100;
	cout << "score: " << score << endl;
	int lives = 3;
	++lives;
	cout << "lives: " << lives << endl;
	lives = 3;
	lives++;
	cout << "lives: " << lives << endl;
	lives = 3;
	//префиксный инкримент
	//сначала увеличит на 1
	//после умножает на 10
	int bonus = ++lives * 10;
	cout << "lives, bonus = " << lives << ", " << bonus << endl;
	lives = 3;
	//постфиксный инкримент
	//сначала умножает на 10
	//после увеличет lives на 1
	bonus = lives++ * 10;
	cout << "lives, bonus = " << lives << ", " << bonus << endl;
	lives = 3;
	bonus = 1 + lives * 10;
	cout << "lives, bonus: " << lives << ", " << bonus << endl;
	//целочисленное переполнение
	score = 4294960234393;
	cout << "score: " << score << endl;
	++score;
	cout << "score: " << score << endl;

	return 0;
}
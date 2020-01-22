#include <iostream>
using namespace std;

int main() {
	const int ALIEN_POINTS = 150;
	int aliensKilled = 10;
	int score = aliensKilled * ALIEN_POINTS;
	cout << "score: " << score << endl;
	
	enum difficulty {NOVICE, EASY, NORMAL, HARD, UNBEATABLE};
	difficulty myDifficulty = EASY;
	enum shipCost {FIGHTER_COST = 25, BOMBER_COST, CRUISET_COST = 50};
	shipCost myShipCost = BOMBER_COST;
	//модернизировать корабль до крейсера будет стоить
	//Ресурсные очки
	cout << "\nTo upgrade my ship to a Cruiser will cost " << (CRUISET_COST -myShipCost) << " Resource points" << endl;
	return 0;
}
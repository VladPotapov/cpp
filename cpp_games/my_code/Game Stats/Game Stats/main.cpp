#include <iostream>
using namespace std;

int main() {
	int score = 0;
	double distance = 1200.76;
	char playAgain = 'y';
	bool shielsdUp = true;
	short lives = 3;
	short aliensKilled = 10;
	double enginTemp = 6572.89;

	cout << "\nscore: " << score << endl;
	cout << "distance: " << distance << endl;
	cout << "PlayAgain: " << playAgain << endl;
	cout << "lives: " << lives << endl;
	cout << "aliensKilled: " << aliensKilled << endl;
	cout << "enginTemp: " << enginTemp << endl;
	
	int fuel = 0;

	//сколько топлива?
	cout << "\nHow much fuel? ";
	cin >> fuel;
	cout << "\nfuel: " << fuel << endl;
	
	typedef unsigned short int ushort;
	
	ushort bonus = 10;

	cout << "\nbonus: " << bonus << endl;

	return 0;
}
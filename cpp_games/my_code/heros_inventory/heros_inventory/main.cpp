//hero's inventory
//job with class

#include <iostream>
#include <string>
using namespace std;

int main() {
	const int MAX_ITEMS = 10;
	string inventory[MAX_ITEMS];
	int numItems = 0;
	inventory[numItems++] = "sword";
	inventory[numItems++] = "armor";
	inventory[numItems++] = "shield";

	cout << "You items: \n";

	for (int i = 0; i < numItems; ++i) {
		cout << inventory[i] << endl;
	}

	cout << "\nYou trade your sword for a battle axe." << endl;

	inventory[0] = "battle axe";

	cout << "\nYou items: \n";

	for (int i = 0; i < numItems; ++i) {
		cout << inventory[i] << endl;
	}

	return 0;
}
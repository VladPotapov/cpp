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

	inventory[0] = "battleaxe";

	cout << "\nYou items: \n";

	for (int i = 0; i < numItems; ++i) {
		cout << inventory[i] << endl;
	}

	cout << inventory[0].size() << " lettersinit" << endl;

	// проверка на количество элементов в мпссиве
	if (numItems < MAX_ITEMS) {
		inventory[numItems++] = "healing potion";
	}
	else {
		cout << " none index array ";
	}

	for (int i = 0; i < numItems; ++i) {
		cout << inventory[i] << endl;
	}

	cout << "\nThe item name '" << inventory[0] << "' has ";
	cout << inventory[0].size() << " letters" << endl;
	cout << "you find a healing potion" << endl;

	if (numItems < MAX_ITEMS) {
		inventory[numItems++] = "healing potion";
	}
	else {
		cout << "you have too many items and can't carry another";
	}

	cout << "You items:\n";

	for (int i = 0; i < numItems; ++i) {
		cout << inventory[i] << endl;
	}

	return 0;
}
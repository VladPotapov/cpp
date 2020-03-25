#include <iostream>
using namespace std;

//score_rater-2.0 and score_rater-3.0
int main() {
	int score;

	cout << "Enter you score: ";
	cin >> score;

	if (score >= 1000) {
		cout << "You scored 1000 or more\n";
	}

	else if (score >= 500) {
		cout << "You scored 500 or more\n";
	}

	else if (score >= 250) {
		cout << "You scored 250 or more\n";
	}
	else {
		cout << "you scored less than 250\n";
	}

	return 0;
}
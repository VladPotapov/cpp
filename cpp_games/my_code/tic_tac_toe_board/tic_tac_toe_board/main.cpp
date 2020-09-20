#include <Windows.h>
#include <iostream>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const int ROWS = 3;
	const int COLUMNS = 3;
	char board[ROWS][COLUMNS] = {
		{'O', 'X', 'O'},
		{' ', 'X', 'X'},
		{'X', 'O', 'O'}
	};

	cout << "доска для игры в крестики нолики\n";

	for (int i = 0; i < ROWS; ++i) {
		for (int j = 0; j < COLUMNS; ++j) {
			cout << board[i][j];
		}
		cout << endl;
	}

	cout << "\n'X' перемещается в пустое место. \n\n";
	board[1][0] = 'X';
	cout << "Now the tic tac toe board is:\n";

	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLUMNS; j++) {
			cout << board[i][j];
		}
		cout << endl;
	}
	return 0;
}
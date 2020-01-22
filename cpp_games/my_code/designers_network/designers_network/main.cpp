#include <iostream>

using namespace std;

int main() {
	string username;
	string password;
	bool success;

	setlocale(LC_ALL, "Russian");
	//Game designer network
	cout << "Сеть геймдизайнеров\n";
	
	do {
		cout << "Имя пользователя: ";
		cin >> username;
		cout << "\nПароль: ";
		cin >> password;

		if (username == "Miler" && password == "civilization") {
			cout << "Hello " << username;
			success = true;
		}
		else if (username == "Vayler" && password == "minicraft") {
			success = true;
		}
	} while (!success);
	return 0;
}
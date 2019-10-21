#include <iostream>
using namespace std;
/*
если требуется подключить только std::cout std::endl
using std::cout;
using std::endl
*/

int main() {
	/*если не подключёна строка
	using namespace std*/
	std::cout << "Game over" << std::endl;
	/*если подключена библиотека std*/
	cout << "new string" << endl;
	return 0;
}
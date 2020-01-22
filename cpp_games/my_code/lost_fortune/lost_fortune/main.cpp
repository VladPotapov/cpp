#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
	const int GOLD_PIECES = 900;
	int adventurers, killed, survivors;
	string leader;

	setlocale(LC_ALL, "Russian");
	cout << "добро пожаловать в игру ";
	cout << "введите значение\n";
	cin >> adventurers;
	
	cout << "Введите число меньше первого ";
	cin >> killed;
	survivors = adventurers - killed;
	cout << "Ваше имя ";
	cin >> leader;

	//расскажи историю
	/*
	Храбрая группа adventures отправится в квест
	- в поисках потерянных сокровищ Древних Гномов.
	*/
	
	cout << "Храбрая группа " << adventurers << " отправиться в квест ";
	cout << "-- в поисках утраченного сокровища древних гномов. ";
	cout << "Группу возглавлял этот легендарный жулик, " << leader << ".\n";
	cout << "\nПо пути группа мародерствующих огров устроила засаду на экспедицию." << "\n";
	cout << "Все храбро сражались под командованием " << leader << ".\n";
	cout << "и огры были побеждены, но ценой. " << "\n";
	cout << "Авантюристов, " << killed << " были побеждены, ";
	cout << "оставляя только " << survivors << " в группе" << "\n";

	cout << "Группа собиралась расстаться с надеждой." << "\n";
	cout << "Но при укладке умерших, ";
	cout << "они наткнулись на похороненное состояние." << "\n";
	cout << "Так Таким образом, искатели приключений раскололи " << GOLD_PIECES << "кусочки золота." << "\n";
	cout << leader << " держиться за доп " << (GOLD_PIECES % survivors) << endl;
	cout << "кусочки, чтобы держать вещи честно, конечно." << endl;

	return 0;
}
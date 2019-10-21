#include <iostream>
using namespace std;
int main() {
	//type variables
	//string
	//int
	//float
	//bool (false, true) (0, 1)
	//char (odinochniy simvol)
	string name = "Ý";
	int houses = 'A';
	float weight = 45;
	char grade = 65;
	cout << "name=" << name << endl;
	cout << "houses=" << houses << endl;
	cout << "weight=" << weight << endl;
	cout << "grade=" << grade << endl;
	cout << "Slozhenie chisel" << endl;
	cout << "12345 + 67890 = " << 12345 + 67890 << endl;
	int num1 = 12345;
	int num2 = 67890;
	cout << "num1 + num2 = " << num1 + num2 << endl;
	int my_num1, my_num2, sum;
	cout << "Give me two numbers";
	cin >> my_num1 >> my_num2;
	sum = my_num1 + my_num2;
	cout << my_num1 << '+' << my_num2 << '=' << sum << endl;
	cin.get();
}
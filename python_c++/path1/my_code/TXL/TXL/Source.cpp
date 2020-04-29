#include "c:/Server/data/htdocs/cpp/libs/TX/TXLib.h"

int main() {
	//если false то блок не будет центрироваться
	bool position = true;
	//окно
	txCreateWindow(400, 400, position);
	//указать цвет пиксела
	//в координатах x, y
	txSetPixel(10, 10, TX_RED);
	return 0;
}
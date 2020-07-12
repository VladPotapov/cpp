#include "c:/Server/data/htdocs/cpp/libs/TX/TXLib.h"
#include <iostream>
using namespace std;

int main() {
	//если false то блок не будет центрироваться
	bool position = true;

	//окно
	txCreateWindow(400, 400, position);

	//указать цвет пиксела
	//в координатах x, y
	txSetPixel(50, 50, RGB(0, 255, 128));
	cout << hex << txGetPixel(50, 50) << endl;

	//цвет и толщина линий (толщину указывать не обязательно)
	txSetColor(TX_GREEN, 5);

	//линия (цвет указывать заранее)
	txLine(10, 20, 100, 150);

	//цвет заливки
	txSetFillColor(TX_YELLOW);

	//создание ломаной фигуры
	POINT contour[3] = { {0, 0}, {100, 100}, {0, 50} };
	txPolygon(contour, 3);

	//задать прозрачный цвет
	txSetFillColor(TX_TRANSPARENT);

	//прямоугольник
	txRectangle(100, 50, 150, 130);

	//окружность
	txCircle(100, 250, 50);

	return 0;
}
#include <iostream>
#include "C:\Server\data\htdocs\cpp\libs\TX\TXLib.h"

using namespace std;

int main() {
//vivod window skraya
	txCreateWindow(600, 400, false);
	if (!txOK()) {
		txMessageBox("Не смогла создать окно", "Извините", MB_ICONSTOP);
		return 0;
	}
	txSetPixel(100, 100, TX_RED);
	txSetPixel(110, 100, RGB(255, 128, 0));
	txSetPixel(120, 100.5, TX_WHITE);
	txSetPixel(130, 100, TX_MAGENTA);
	txSetPixel(140, 100, RGB(128, 0, 128));
	cout << txGetPixel(130, 100) << endl;
	cout << hex << txGetPixel(130, 100) << endl;
	txCircle(100, 250, 50);
	txSetFillColor(RGB(255, 100, 50));
	txCircle(250, 250, 50);
	txSetColor(TX_RED, 3);
	txSetFillColor(TX_TRANSPARENT);
	//txTriangle не работает
	txRectangle(150, 20, 200, 100);
	POINT start[3] = { {300, 1}, {400, 100}, {200, 100}};
	txPolygon(start, 3);
}
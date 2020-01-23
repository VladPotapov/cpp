#include "c:\Server\data\htdocs\cpp\libs\TX\TXLib.h"

void win(int x1, int y1, int x2, int y2, double sizeX, double sizeY, COLORREF color);

int main() {
	win(20, 50, 100, 0, 500, 500, TX_RED);
	return 0;
}

void win(int x1, int y1, int x2, int y2, double sizeX, double sizeY, COLORREF color) {
	txCreateWindow(sizeX, sizeY);
	txSetColor(color);
	txLine(x1, y1, x1 + x2, y1 + y2);
	
	//устанавливает значения по умолчанию
	txSetDefaults();
	txLine(x1, y1 * 2, x1 + x2, (y1 * 2) + y2);
}
#include <stdlib.h>
#include "C:\\Server\data\htdocs\cpp\libs\TX\TXLib.h"

int main() {
	int width = 800;
	int height = 600;
	txCreateWindow(width, height);
	txSetPixel(10, 20, TX_LIGHTGREEN);
	txSetPixel(10, 21, RGB(0, 255, 128));
	cout << txGetPixel(10, 20);
	cout << "\n";
	cout << _HEX << txGetPixel(10, 21);
	txSetColor(TX_PINK, 5);
	txLine(10, 10, 100, 150);
	txSetFillColor(TX_YELLOW);
	POINT contour[3] = { {0, 0}, {100, 100}, {0, 50} };
	txPolygon(contour, 3);
	txRectangle(50, 50, 100, 100);
	txSetFillColor(TX_RED);
	txSetColor(TX_BLACK, 2);
	txCircle(150, 150, 50);
	txSetColor(TX_WHITE);
	txSelectFont("Times New Roman", 60);
	int text_x = width / 2;
	int text_y = height / 2;
	txTextOut(text_x, text_y, "Hello World");
	return 0;
}
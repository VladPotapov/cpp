#include "C:/Server/data///htdocs/cpp/libs/TX/TXLib.h"

int main() {
	txCreateWindow(800, 600);

	txSetColor(TX_WHITE);
	txSetFillColor(TX_TRANSPARENT);
	txRectangle(10, 10, 790, 590);

	txSetColor(TX_LIGHTCYAN);
	txEllipse(200, 150, 600, 450);
	txEllipse(245, 150, 555, 450);
	txEllipse(290, 150, 510, 450);
	txEllipse(330, 150, 470, 450);
	txEllipse(375, 150, 425, 450);
	txEllipse(200, 150, 600, 450);
	txEllipse(200, 190, 600, 410);
	txEllipse(200, 230, 600, 370);
	txEllipse(200, 270, 600, 330);
	txLine(200, 300, 600, 300);
	return 0;
}
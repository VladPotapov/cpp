#include "c:/Server/data/htdocs/cpp/libs/TX/TXLib.h"

void DrawMan();
void DrawEarth();
void DrawFlag();
void DrawHello();
void DrawFrame();

int main() {
	txCreateWindow(800, 600);

	DrawFrame();
	DrawEarth();
	DrawHello();
	DrawMan();
	DrawFlag();

	txTextCursor();

	return 0;
}

void DrawEarth() {
	txSetColor(TX_LIGHTCYAN);
	txEllipse(200, 150, 600, 450);
	txEllipse(245, 150, 555, 450);
	txEllipse(290, 150, 510, 450);
	txEllipse(330, 150, 470, 450);
	txEllipse(375, 150, 425, 450);

	txSetFillColor(TX_TRANSPARENT);
	txEllipse(200, 150, 600, 450);
	txEllipse(200, 190, 600, 410);
	txEllipse(200, 230, 600, 370);
	txEllipse(200, 270, 600, 330);
	txLine(200, 300, 600, 300);
}

void DrawMan() {
	txSetColor(TX_YELLOW);
	txSetFillColor(TX_YELLOW);
	txLine(385, 135, 385, 120);
	txLine(385, 135, 375, 150);
	txLine(385, 135, 395, 150);
	txLine(385, 125, 375, 135);
	txLine(385, 125, 400, 120);
	txCircle(385, 115, 6);
}

void DrawFlag() {
	txSetFillColor(TX_TRANSPARENT);
	txLine(400, 75, 400, 150);
	txRectangle(400, 75, 450, 115);

	txSelectFont("Times New Roman", 20);
	txTextOut(425, 85, "C++");
}

void DrawHello() {
	txSetColor(TX_LIGHTGREEN);
	txSelectFont("Times New Roman", 60);
	txSetTextAlign(TA_CENTER);
	txTextOut(400, 480, "Hello World!");
}

void DrawFrame() {
	txSetColor(TX_WHITE);
	txSetFillColor(TTF_TRANSPARENT);
	txRectangle(10, 10, 790, 580);
}
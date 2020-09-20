#include "c:/Server/data/htdocs/cpp/libs/TX/TXLib.h"

//void DrawMan(int x, int y, int sizeX, int sizeY, COLORREF color, double hand = 0, double legs = 0, double head = 0, double twist = 0);
void DrawEarth(int x, int y, int sizeX, int SizeY, COLORREF color);
//void DrawFlag(int x, int y, int sizeX, int sizeY, COLORREF color, COLORREF bkColor);
void DrawHello(int x, int y, const char* text, int size, COLORREF color);
void DrawFrame(int sizeX, int sizeY, int size, COLORREF color);

int main() {
	int x = 800;
	int y = 600;
	txCreateWindow(x, y);

	DrawFrame(x, y, 10, TX_WHITE);
	DrawHello(400, 480, "Hello world", 60, TX_LIGHTGREEN);
	DrawEarth(400, 300, 400, 300, TX_LIGHTCYAN);

	return 0;
}

void DrawEarth(int x, int y, int sizeX, int sizeY, COLORREF color) {
	txSetColor(color);

	int r = static_cast<unsigned __int64>(sizeX) / 2;

	while (r >= 0) {
		txEllipse(x - r, y - static_cast<unsigned __int64>(sizeY) / 2, x + r, y + static_cast<unsigned __int64>(sizeY) / 2);
		r -= sizeX / 9;
	}
}

void DrawHello(int x, int y, const char* text, int size, COLORREF color) {
	txSetColor(color);
	txSelectFont("Times New Roman", size);
	txSetTextAlign(TA_CENTER);
	txTextOut(x, y, text);
}

void DrawFrame(int sizeX, int sizeY, int size, COLORREF color) {
	txSetColor(color);
	txSetFillColor(TX_TRANSPARENT);
	txRectangle(size, size, static_cast<unsigned __int64>(sizeX) - size, static_cast<unsigned __int64>(sizeY) - size);

	//вызовет 2 предупреждения
	//txRectangle(size, size, sizeX - size, sizeY - size);
}
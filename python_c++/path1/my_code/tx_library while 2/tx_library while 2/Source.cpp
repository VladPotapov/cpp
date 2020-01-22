#include <conio.h>
#include "c:\Server\data\htdocs\cpp\libs\TX\TXLib.h"

//void DanceMan(int x, int y, int sizeX, int sizeY, double jump, COLORREF color, COLORREF bkColor, int delay);
//void JumpMan(int x, int y, int sizeX, int sizeY, double jump, COLORREF color, COLORREF bkColor, int jumps, int delay);
//void MoveMan(int fromX, int fromY, int toX, int toY, int sizeX, int sizeY, COLORREF color, COLORREF bkColor, int time, int steps);
//void DrawMan(int x, int y, int sizeX, int sizeY, COLORREF color, double hand = 0, double legs = 0, double head = 0, double twist = 0);
//void AppearEarth(int x, int y, int sizeX, int sizeY, COLORREF from, COLORREF to, int time, int steps);
//void DrawEarth(int x, int y, int  sizeX, int sizeY, COLORREF color);
void AppearText(int x, int y, const char* text, COLORREF from, COLORREF to, int time, int steps);
//void DrawHello(int x, int y, const char* text, int size, COLORREF color);
//void UnwindFlag(int x, int y, int fromSizeX, int toSizeX, int sizeY, COLORREF color, COLORREF bkColor, int time, int steps);
//void DrawFlag(int x, int y, int sizeX, int sizeY, COLORREF color, COLORREF bkColor);
void DrawFrame(int sizeX, int sizeY, int size, COLORREF color);

int kbget();

//--------------------------------------------------

int main() {
	txCreateWindow(800, 600);
	txTextCursor(false);

	int sizeX = txGetExtentX(), sizeY = txGetExtentY();
	int centerX = (sizeX + 1) / 2, centerY = (sizeY + 1) / 2;

	DrawFrame(sizeX, sizeY, 10, TX_WHITE);

	txSelectFont("Times New Roman", 60);
	txSetTextAlign(TA_CENTER);

	AppearText(centerX, sizeY*4/5, "\"Hello World!\\n\" :)", TX_BLACK, TX_LIGHTGREEN, 5000, 100);
	return 0;
}

//--------------------------------------------------
void AppearText(int x, int y, const char* text, COLORREF from, COLORREF to, int time, int steps) {
	int r0 = txExtractColor(from, TX_RED), r1 = txExtractColor(to, TX_RED),
		g0 = txExtractColor(from, TX_GREEN), g1 = txExtractColor(to, TX_GREEN),
		b0 = txExtractColor(from, TX_BLUE), b1 = txExtractColor(to, TX_BLUE);

	for (int i = 0; i <= steps && !kbhit(); i++) {
		int r = r0 + (r1 - r0) * i / steps,
			g = g0 + (g1 - g0) * i / steps,
			b = b0 + (b1 - b0) * i / steps;

		txSetColor(RGB(r, g, b));
		txTextOut(x, y, text);

		Sleep(time / steps);
	}

	kbget();

	txSetColor(to);
	txTextOut(x, y, text);
}
//--------------------------------------------------
//--------------------------------------------------
//--------------------------------------------------

void DrawFrame(int sizeX, int sizeY, int size, COLORREF color) {
	txSetColor(color);
	txSetFillColor(TX_TRANSPARENT);

	txRectangle(size, size, sizeX - size, sizeY - size);
}
//--------------------------------------------------

int kbget() {
	int ch = 0;
	while (kbhit()) ch = getch();
	return ch;
}
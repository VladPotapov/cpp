//=================================== Modules =======================================
#include <conio.h>
#include "C:/Server/data/htdocs/cpp/libs/TX/TXLib.h"

//================================== functions =======================================

// void JumpMan(int x, int y, int sizeX, int sizeY, double jump, COLORREF color, COLORREF bkColor, int jumps, int delay);
// void MoveMan(int fromX, int fromY, int toX, int toY, int sizeX, int sizeY, COLORREF color, COLORREF bkColor, int time, int steps);
void DrawFrame(int sizeX, int sizeY, int size, COLORREF color);

//================================== Main ============================================

int main() {
	txCreateWindow(800, 600);
	txTextCursor(false);

	//DrawFrame();
	return 0;
}

//================================== functions =======================================

//================================== functions =======================================

//================================== functions =======================================

//================================== functions =======================================

//================================== functions =======================================

//================================== functions =======================================

//================================== DrawFrame =======================================

void DrawFrame(int sizeX, int sizeY, int size, COLORREF color) {
	txSetColor(color);
	txSetFillColor(TX_TRANSPARENT);
	txRectangle(size, size, sizeX - size, sizeX - size);
}
#include "c:\Server\data\htdocs\cpp\libs\TX\TXLib.h"

void one_figura() {
	txSetFillColor(RGB(71, 177, 198));
	POINT contour[6] = { {300, 50}, {470, 500}, {415, 500}, {300, 130}, {50, 600}, {0, 550} };
	txPolygon(contour, 6);
}

void two_figura() {
	txSetFillColor(RGB(52, 154, 173));
	POINT contour[6] = { {300, 50}, {350, 50}, {550, 550}, {150, 550}, {170, 500}, {470, 500} };
	txPolygon(contour, 6);
}

void three_figura() {
	txSetFillColor(RGB(44, 123, 143));
	POINT contour[6] = { {300, 130}, {321, 200}, {150, 550}, {550, 550}, {525, 600},{50, 600} };
	txPolygon(contour, 6);
}

int main() {
	int size = 600;
	txCreateWindow(size, size);
	one_figura();
	two_figura();
	three_figura();
	return 0;
}
#include "c:/Server/data/htdocs/cpp/libs/TX/TXLib.h"
#include <iostream>
using namespace std;

int main() {
	//���� false �� ���� �� ����� ��������������
	bool position = true;

	//����
	txCreateWindow(400, 400, position);

	//������� ���� �������
	//� ����������� x, y
	txSetPixel(50, 50, RGB(0, 255, 128));
	cout << hex << txGetPixel(50, 50) << endl;

	//���� � ������� ����� (������� ��������� �� �����������)
	txSetColor(TX_GREEN, 5);

	//����� (���� ��������� �������)
	txLine(10, 20, 100, 150);

	//���� �������
	txSetFillColor(TX_YELLOW);

	//�������� ������� ������
	POINT contour[3] = { {0, 0}, {100, 100}, {0, 50} };
	txPolygon(contour, 3);

	//������ ���������� ����
	txSetFillColor(TX_TRANSPARENT);

	//�������������
	txRectangle(100, 50, 150, 130);

	//����������
	txCircle(100, 250, 50);

	return 0;
}
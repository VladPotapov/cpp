#include "c:/Server/data/htdocs/cpp/libs/TX/TXLib.h"

int main() {
	//���� false �� ���� �� ����� ��������������
	bool position = true;
	//����
	txCreateWindow(400, 400, position);
	//������� ���� �������
	//� ����������� x, y
	txSetPixel(10, 10, TX_RED);
	return 0;
}
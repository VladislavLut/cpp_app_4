#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

int main() {
	system("chcp 1251");
	system("cls");
	float l, r, s;
	cout << "������ ������� ����: ";
	cin >> l;
	r = l / (2 * 3,14);
	s = 3,14 * pow(r, 2);
	cout << "����� ����: " << s << endl;
	return 0;
}
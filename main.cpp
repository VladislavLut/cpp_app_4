#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

int main() {
	system("chcp 1251");
	system("cls");
	float v, a, t, s;
	cout << "������ ��������� ��������: ";
	cin >> v;
	cout << "������ �����������: ";
	cin >> a;
	cout << "������ ��� ����: ";
	cin >> t;
	s = v * t + (a * t * t) / 2;
	cout << "�������� �������: " << s << endl;
	return 0;
}

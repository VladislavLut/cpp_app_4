#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

int main() {
	system("chcp 1251");
	system("cls");
	float v, a, t, s;
	cout << "Введіть початкову швидкість: ";
	cin >> v;
	cout << "Введіть прискорення: ";
	cin >> a;
	cout << "Введіть час руху: ";
	cin >> t;
	s = v * t + (a * t * t) / 2;
	cout << "Пройдена відстань: " << s << endl;
	return 0;
}

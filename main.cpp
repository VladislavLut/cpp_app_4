#include <iostream>
#include <Windows.h>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	system("chcp 1251");
	system("cls");
	float r1, r2, r3, r0;
	cout << "Введіть значення опорів r1, r2, r3: ";
	cin >> r1 >> r2 >> r3;
	r0 = 1 / (1 / r1 + 1 / r2 + 1 / r3);
	cout << "Значення опору R0: " << r0 << endl;
	return 0;

}
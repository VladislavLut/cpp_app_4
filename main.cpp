#include <iostream>
#include <cmath>

using namespace std;

int main() {
	float l, r, s;

	cout << "¬вед≥ть довжину кола: ";
	cin >> l;

	r = l / (2 * M_PI);

	s = M_PI * pow(r, 2);

	cout << "ѕлоща кола: " << s << endl;

	return 0;
}
#include <iostream>
#include <conio.h>
#include <cmath>

/*
	Source by GeeksForGeeks
	Modified For Learn by RK
	I.D.E : VS2019
*/

using namespace std;

int main() {
	float x = 6.3;
	float y = sqrt(-9);

	cout << "The value of x is= " << x << endl;
	cout << "The value of y is= " << y << endl;

	cout << "isunordered(x, y) = " << isunordered(x, y);

	_getch();
	return 0;
}

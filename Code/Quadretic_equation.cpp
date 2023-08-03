#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float a, b, c, R1, R2;
	cout << "Enter a,b ,c \n";
	cin >> a >> b >> c;

	R1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
	R2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

	cout << "Square Root are\t" << R1 << "\t" << R2;
}
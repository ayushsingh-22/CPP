#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d, e;
	cout << "Enter 4 digit";
	cin >> a >> b >> c >> d;

	e = a + b - c * d / c + 1;
	cout << "Your Result" << e;
}
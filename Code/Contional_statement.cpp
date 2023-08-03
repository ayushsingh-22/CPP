#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "Enter your Roll no.\t";
	cin >> a;
	cout << endl;
	if (a < 20)
	{
		cout << "Valid Roll no. \t" << a << endl;
	}

	else
	{
		cout << "Invalid Roll no.\t" << endl;
	}

	return 0;
}
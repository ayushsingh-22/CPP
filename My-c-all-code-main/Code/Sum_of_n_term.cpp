#include <iostream>
using namespace std;
int main()
{
	int n, s;

	cout << "Enter no. of term - 'n'";
	cin >> n;

	s = (n * (n + 1)) / 2;

	cout << "Sum of n-term" << s;
	return 0;
}

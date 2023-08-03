#include <iostream>
using namespace std;
int main()
{
    int a, factorial = 1;
    cout << "Enter 'a' =\t";
    cin >> a;

    if (a == 0 || a == 1)
    {
        cout << "Factorial of 'a' =\t" << endl;
    }
    else if (a > 0)
    {
        while (a > 0)
        {
            factorial *= a;
            a--;
        }
    }
    cout << "Factorial of 'a'  =\t" << factorial << endl;
}

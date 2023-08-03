#include <iostream>
using namespace std;
int main()
{
    int a, b = 1, c = 0;
    // where c = sum
    cout << "Enter value of 'n'  =\t";
    cin >> a;
    cout << endl;

    for (b; a >= b; b++)
    {
        c += b;
    }
    cout << "Sum of nth term  ="
         << " " << c;
}
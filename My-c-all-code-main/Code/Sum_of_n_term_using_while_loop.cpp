#include <iostream>
using namespace std;
int main()
{
    int n, c = 1, sum = 0;
    cout << "Enter value of upto 'n' for addition  =\t";
    cin >> n;

    while (c <= n)
    {
        sum = sum + c;
        c++;
    }
    cout << "Sum of 'n' term  =\t" << sum << endl;
}

// {
//     int m, n = 0, sum = 0;
//     cout << "Value of 'm' =\t";
//     cin >> m;

//     do
//     {
//         n += sum;
//         sum++;
//     } while (m >= sum);
//     cout << "Sum of 'n' term  =\t" << n << endl;
// }
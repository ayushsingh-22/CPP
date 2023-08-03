#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "Enter year =\t";
    cin >> year;

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                cout << "Wlcm to leap year" << endl;
            else

                cout << "Sorry! No leap year" << endl;
        }
        else

            cout << "Wlcm to leap year" << endl;
    }
    else

        cout << "Sorry! no leap year" << endl;
    system("pause");
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int rowscount;

    cout << "Enter number of rowscount you want the pyramid to have: ";
    cin >> rowscount;

    for(int i = 1; i <= rowscount; ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}

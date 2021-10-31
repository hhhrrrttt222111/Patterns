#include <iostream>
using namespace std;

int main()
{
    int rowscount , var = 0, var2 = 0, var3 = 0;

    cout << "Enter number of rowscount : ";
    cin >> rowscount ;

    for(int i = 1; i <= rowscount ; ++i) // This outerloop will run as per the rowscount entered by user
    {
        for(int space = 1; space <= rowscount -i; ++space) // this loop will print spaces
        {
            cout << "  ";
            ++var;
        }

        while(var3 != 2*i-1)
        {
            if (var <= rowscount -1)
            {
                cout << i+var3 << " ";
                ++var;
            }
            else
            {
                ++var2;
                cout << i+var3-2*var2 << " ";
            }
            ++var3;
        }
        var2 = var = var3 = 0;

        cout << endl;
    }
    return 0;
}

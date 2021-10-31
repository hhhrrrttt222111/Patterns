#include <iostream>
using namespace std;

int main()
{
    int rowscount;

    cout << "Enter number of rowscount you want the pyramid to have: ";
    cin >> rowscount;

    for(int i = 1; i <= rowscount; ++i) // this is the outer loop which will run with respect to "rows count" as entered by user.
    {
        for(int j = 1; j <= i; ++j) // this loop will print asteriks. 
        {
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}

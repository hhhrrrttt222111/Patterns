#include <iostream>
using namespace std;

int main()
{
    int rows;

    cout << "Enter number of rows: "; // User will enter number of rows for the half pyramid
    cin >> rows;

    for(int i = rows; i >= 1; --i) // this loop is the outer loop 
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << "* ";
        }
        cout << endl;
    }
    
    return 0;
}

#include <iostream>
using namespace std;
// Printed a square with # characters
int main()
{
    int size;
    cout << "\n\n Print a pattern like square with # character:\n";
    cout << "--------------------------------------------------\n";
    
    for (int row = 1; row <= 5; ++row) 
    {
        for (int col = 1; col <= 5; ++col) 
        {
            cout << "# ";
        }
        cout << endl;
    }
    return 0;
}
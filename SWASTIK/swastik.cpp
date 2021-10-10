#include <iostream>
using namespace std;

int main()
{

    cout << "Enter a number greater than 2: \n";
    int n;
    cin >> n;
    if (n < 3)
        cout << "Invalid Input\n";
    else
    {
        for (int i = 1; i < 2 * n; i++)
        {
            for (int j = 1; j < 2 * n; j++)
            {
                if (i == 1 && j > n)
                    cout << "*";
                else if ((i < n) && (j == 1 || j == n))
                    cout << "*";
                else if (i == n)
                    cout << "*";
                else if ((i > n) && (j == ((2 * n) - 1) || j == n))
                    cout << "*";
                else if (i == ((2 * n) - 1) && j < n)
                    cout << "*";
                else
                    cout << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}

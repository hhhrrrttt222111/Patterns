#include <iostream>
 
using namespace std;
char ch = '#';

void print_b(int n)
{
    int x = n / 2;
    int temp = n;
    while (temp--)
    {
        for (int i = 0; i <= x; i++)
        {
            cout << " ";
        }
        if ((temp == n - 1) || (temp == x) || (temp == 0))
        {
            for (int i = 0; i < n - 2; i++)
            {
                cout << ch;
            }
        }
        else
        {
            cout << ch;
            for (int i = 0; i < n - 3; i++)
            {
                cout << " ";
            }
            cout << ch;
        }
        cout << endl;
    }
}
 
 
 
int main()
{
    int n;
    cin >> n;
    print_b(n);
    cout << endl
         << endl
         << endl;
    return 0;
}

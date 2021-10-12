#include <iostream>
 
using namespace std;
char ch = '#';
 
void print_c(int n)
{
    int temp = n;
    while (temp--)
    {
        for (int i = 0; i <= n / 2; i++)
        {
            cout << " ";
        }
        if ((temp == n - 1) || (temp == 0))
        {
            cout << " ";
            for (int i = 0; i < n - 2; i++)
            {
                cout << ch;
            }
        }
        else
            cout << ch;
        cout << endl;
    }
}
 
 
int main()
{
    int n;
    cin >> n;
    print_c(n);
    cout << endl
         << endl
         << endl;
    return 0;
}

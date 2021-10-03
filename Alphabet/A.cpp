#include <iostream>
 
using namespace std;
char ch = '#';
void print_a(int n)
{
    int x = n;
    int temp = n;
    while (temp--)
    {
        for (int i = 0; i < x; i++)
            cout << " ";
        cout << ch;
        if (temp == (n / 2))
        {
            for (int i = 0; i < 2 * (n - x); i++)
                cout << ch;
        }
        else
            for (int i = 0; i < 2 * (n - x); i++)
                cout << " ";
        cout << ch;
        cout << endl;
        x--;
    }
    return;
}

 
 
int main()
{
    int n;
    cin >> n;
    print_a(n);
    return 0;
}

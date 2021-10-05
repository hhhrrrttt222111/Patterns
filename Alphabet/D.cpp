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
 
void print_d(int n)
{
    int temp = n;
    while (temp--)
    {
        for (int i = 0; i <= n / 2; i++)
        {
            cout << " ";
        }
        if (temp == n - 1 || temp == 0)
        {
            for (int i = 0; i <= n ; i++)
            {
                cout << ch;
            }
        }
        else{
            cout<<ch;
            for(int i=0; i<n; i++){
                cout<<" ";
            }
            cout<<ch;
        }
        cout<<endl;
    }
}
 
 
int main()
{
    int n;
    cin >> n;
    print_d(n);
    cout << endl
         << endl
         << endl;
    return 0;
}

#include <iostream>
using namespace std;

int main()
{

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 11 - i + 1; j++)
            cout << " ";

        for (int j = 1; j <= ((i * i) + 2 - i) / 2; j++)
            cout << "*";

        cout << "\n";
    }

    cout << "\n";

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 2 * (4 - i + 1); j++)
            cout << " ";

        for (int j = 1; j <= 2 + (4 * i); j++)
            cout << "*";

        cout << "\n";
    }

    cout << "\n";

    for (int i = 1; i <= 2; i++)
    {
        for (int k = 1; k <= 2 - i + 1; k++)
            cout << " ";

        cout << "*";

        for (int j = 1; j <= i * (i * i) - (i * i); j++)
            cout << " ";

        for (int k = 1; k <= 2 * (2 - i + 1) - 1; k++)
            cout << "*";

        for (int k = 1; k <= 2 * (5 - i + 1); k++)
            cout << " ";

        cout << "*";
        for (int j = 1; j <= i * (i * i) - (i * i); j++)
            cout << " ";

        for (int k = 1; k <= 2 * (2 - i + 1) - 1; k++)
            cout << "*";

        cout << "\n";
    }

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << " ";

        cout << "*";
        for (int j = 1; j <= (11 - i + 1) / 2; j++)
            cout << " ";

        cout << "*";
        for (int j = 1; j <= 5 - i + 1; j++)
            cout << " ";

        for (int j = 1; j <= 1 - i + 1; j++)
            cout << " ";

        cout << "*";
        for (int j = 1; j <= 5; j++)
            cout << " ";

        cout << "*";
        cout << "\n";
    }

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 8; j++)
            cout << " ";

        cout << "*";
        for (int j = 1; j <= 3; j++)
            cout << " ";

        cout << "*";
        cout << "\n";
    }

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 8 + i; j++)
            cout << " ";

        cout << "*";
        for (int j = 1; j <= (7 - i + 1) / 2; j++)
            cout << " ";

        cout << "*";
        cout << "\n";
    }

    for (int i = 1; i <= 2; i++)
    {
        for (int j = 1; j <= 12; j++)
            cout << " ";

        cout << "*";
        for (int j = 1; j <= 2 - i + 1; j++)
            cout << " ";

        cout << "*";
        cout << "\n";
    }

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 11 - i + 1; j++)
            cout << " ";

        cout << "*";
        for (int j = 1; j <= 1; j++)
            cout << " ";

        cout << "*";
        cout << "\n";
    }

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 6 + i; j++)
            cout << " ";

        cout << "*";
        for (int j = 1; j <= (3 - i + 1) / 2; j++)
        {
            cout << " ";
            cout << "*";
        }
        cout << "\n";
    }

    cout << "\n";

    for (int i = 1; i <= 2; i++)
    {
        for (int j = 1; j <= 4 + (i * 2); j++)
            cout << " ";

        for (int j = 1; j <= 4 * (2 - i + 1) + 1; j++)
            cout << "*";

        cout << "\n";
    }

    for (int i = 1; i <= 1; i++)
    {
        for (int j = 1; j <= 10; j++)
            cout << " ";

        cout << "*";
    }

    return 0;
}
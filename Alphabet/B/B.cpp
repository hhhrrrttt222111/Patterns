#include <iostream>
using namespace std;
int height = 5;
int width = (2 * height) - 1;
int abs(int d)
{
    return d < 0 ? -1 * d : d;
}
void printB()
{
    int i, j, half = (height / 2);
    for (i = 0; i < height; i++) {
        cout <<"*";
        for (j = 0; j < width; j++) {
            if ((i == 0 || i == height - 1 || i == half)
                && j < (width - 2))
                cout <<"*";
            else if (j == (width - 2)
                    && !(i == 0 || i == height - 1
                        || i == half))
                cout <<"*";
            else
                cout <<" ";
        }
        cout <<"\n";
    }
}
int main()
{

    printB();
    return 0;
}

#include <iostream>
using namespace std;
 
void ladder_pattern(int N)
{
 
    for (int i = 0; i <= N; i++) {
       
        cout << "*   *" << endl;
        cout << "*   *" << endl;
 
        if (i < N) {
           
            cout << "*****" << endl;
        }
    }
}
 
int main()
{
    // Size of the Pattern
    int N = 3;
 
    ladder_pattern(N);
 
    return 0;
}

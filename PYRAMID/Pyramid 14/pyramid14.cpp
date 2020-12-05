#include <iostream>
#include <math.h>

using namespace std;

int main () {
    int s=4;
    for(int i=s; i>=-s; i--) {
        for(int j=abs(i); j<=s; j++) {
            cout<<j<<"  ";
        }
        cout<<"\n";
    }
    return 0;
}

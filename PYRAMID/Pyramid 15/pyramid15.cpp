#include <iostream>
#include <math.h>

using namespace std;

int main () {
    int s=4;
    for(int i=s; i>=-s; i--) {
        for(int j=1; j<=abs(i); j++) {
            cout<<"  ";
        }
        for(int k=s; k>=abs(i); k--) {
            cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;
}

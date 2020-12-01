#include <iostream>

using namespace std;

int main () {
    char n='F';
    for(char i='A'; i<n; i++) {
        for(char j=n-1; j>i; j--) {
            cout<<"  ";
        }
        for(char k='A'; k<=i; k++) {
            cout<<k<<" ";
        }
        cout<<"\n";
    }
    return 0;
}

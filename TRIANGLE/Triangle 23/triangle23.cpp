#include <iostream>

using namespace std;

int main () {
    for(char i='F'; i>='A'; i--) {
        for(char j='F'; j>i; j--) {
            cout<<"  ";
        }
        for(char k='A'; k<=i; k++) {
            cout<<i<<" ";
        }
        cout<<"\n";
    }
    return 0;
}

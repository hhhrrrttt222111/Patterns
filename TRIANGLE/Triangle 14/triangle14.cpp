#include <iostream>

using namespace std;

int main () {
    for(char i='A'; i<='E'; i++) {
        for(char j='E'; j>=i; j--) {
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    return 0;
}

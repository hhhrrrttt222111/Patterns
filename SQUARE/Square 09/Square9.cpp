#include <iostream>

using namespace std;

int main () {
    for(char i='E'; i>='A'; i--) {
        for(char j='E'; j>='A'; j--) {
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    return 0;
}

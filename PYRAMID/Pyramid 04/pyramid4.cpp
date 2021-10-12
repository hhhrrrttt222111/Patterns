#include <iostream>

using namespace std;

int main () {
    int n=5;
    int x=1;
    for(int i=1; i<=n; i++) {
        for(int j=n-1; j>=i; j--) {
            cout<<" ";
        }
        for(int k=1; k<=x; k++) {
            cout<<k;
        }
        x = x+2;
        cout<<"\n";
    }
    return 0;
}

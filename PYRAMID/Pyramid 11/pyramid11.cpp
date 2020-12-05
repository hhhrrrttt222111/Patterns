#include <iostream>

using namespace std;

int main () {
    int p=5;
    int m=p*2 - 1;
    int s = p-1;
    for(int i=p; i>=1; i--) {
        for(int j=p; j>=i; j--) {
            cout<<"  ";
        }
        for(int k=1; k<=m; k++) {
            cout<<k<<" ";
        }
        m = m-2;
        cout<<"\n\n";
    }
    return 0;
}

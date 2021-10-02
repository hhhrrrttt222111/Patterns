#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin >> n;
  	for(int i=1; i<(2*n); i++) {
          if(i<=n) {
              for(int j=n; j>(n-i+1); j--) {
                  cout << j << " ";
              }
              for(int j=1; j<=(2*(n-i)+1); j++) {
                  cout << n-i+1 << " ";
              }
              for(int j=i; j>1; j--) {
                  cout << n-j+2 << " ";
              }
          }
          else {
              for(int j=1; j<((2*n)-i); j++) {
                  cout << n-j+1 << " ";
              }
              for(int j=1; j<=(2*(i-n)+1); j++) {
                  cout << i-n+1 << " ";
              }
              for(int j=i; j<(2*n)-1; j++) {
                  cout << j-n+2 << " ";
              }
          }
          cout << endl;
      }
    return 0;
}

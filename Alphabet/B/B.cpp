#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Size: ";
    cin >> n;
    for(int i=0; i < 5; i++){
      for(int j=0; j < n+1; j++){
        if(j!=0){
          if((i==0 || i== 4) && j<n) {
          cout << "#";
          }else if((i==1|| i==3) && j==n) {
          cout << "#";
          }else if(i==2 && j!= 1 && j < n){
            cout << "#";
          }
          else{
            cout << " ";
          }
        }else{
          cout << "#";
        }
      }
      cout << endl;

    }
    cout << endl;
}
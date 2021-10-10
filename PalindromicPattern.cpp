#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i,j;
    for(i=1;i<=n;i++){
        int space=n-i;
          int k=i;
        for(j=1;j<=space;j++){
           cout<<"  ";
        }
        for(j=1;j<=i;j++){
          
            cout<<k<<" ";
            k--;

        }
        for(j=2;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}

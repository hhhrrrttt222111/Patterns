#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size (odd number): ";
    cin>>n;
    cout<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || i==n || j==n/2+1)
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
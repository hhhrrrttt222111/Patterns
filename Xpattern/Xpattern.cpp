#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of side of square: ";
    cin>>n;
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j || i+j==n+1)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    
}
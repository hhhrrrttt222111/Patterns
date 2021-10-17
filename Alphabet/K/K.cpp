#include <iostream>
using namespace std;

int main()
{
    //upper half of K 
    for(int i=1;i<=10;i++){
        for(int j=10;j>=1;j--){
            if(j==10 || j==i)
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }
    
    //lower half of K
    for(int i=2;i<=10;i++){
        for(int j=1;j<=10;j++){
            if(j==1 || j==i)
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
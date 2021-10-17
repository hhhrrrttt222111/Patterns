#include <iostream>

using namespace std;

int main()
{
    for(int i=1;i<=10;i++){
        for(int j=1;j<=20-i;j++){
            if(j==i||j==20-i)
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    for(int i=0;i<4;i++)
    {
        for(int k=12;k>i;k--)
        cout<<" ";
        for(int k=0;k<=2*i;k++)
        cout<<"*";
        cout<<"\n";
    }
    for(int i=0;i<=2;i++)
    {
        for(int k=0;k<6-2*i;k++)
        cout<<" ";
        for(int k=0;k<=2*i;k++)
        cout<<"*";
        for(int j=1;j<=10;j++)
        cout<<"*";
        for(int k=0;k<=2*i;k++)
        cout<<"*";
        cout<<"\n";
    }
    for(int i=1;i<=2;i++)
    {
        for(int k=0;k<=2*i+1;k++)
        cout<<" ";
        for(int k=1;k<6-2*i;k++)
        cout<<"*";
        for(int j=1;j<=10;j++)
        cout<<"*";
        for(int k=1;k<6-2*i;k++)
        cout<<"*";
        cout<<"\n";
    }
    for(int i=3;i>=0;i--)
    {
        for(int k=12;k>i;k--)
        cout<<" ";
        for(int k=0;k<=2*i;k++)
        cout<<"*";
        cout<<"\n";
    }
    return 0;
}
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********
#include<iostream>
using namespace std;
int main()
{
  int i,j,k,r;
  cout<<"Enter no. of rows: ";
  cin>>r;
  for(i=1;i<=r;i++)
  {
    for(j=1;j<=r-i;j++)
    cout<<"*";
        for(k=1;k<=2*i-1;k++)
        {
          if(k==1 || k==2*i-1)
          cout<<"*";
          else
          cout<<" ";
        }
      for(j=1;j<=r-i;j++)
      cout<<"*";
    cout<<"\n";
  }
    for(i=r;i>=1;i--)
  {
    for(j=1;j<=r-i;j++)
    cout<<"*";
        for(k=1;k<=2*i-1;k++)
        {
          if(k==1 || k==2*i-1)
          cout<<"*";
          else
          cout<<" ";
        }
      for(j=1;j<=r-i;j++)
      cout<<"*";
    cout<<"\n";
  }
  return 0;  
  }

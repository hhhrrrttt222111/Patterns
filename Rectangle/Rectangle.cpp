#include <iostream>
using namespace std;
int main()
{
    int rowscount,columncount,i,j;
    cout<<"Enter the number of rowscount: ";
    cin>>rowscount; // user inputs number of rows
    
    cout<<"Enter the number of columns: ";
    cin>> columncount;  // user inputs number of columns
     for(i=1; i<=rowscount; i++)  //This is the outer for loop
    {
    for (j=1; j<=columncount; j++)   // This is the inner for loop
    {
           cout<<"*";           //print asteriks
    }
    cout<<"\n";
   }
    return 0;
}

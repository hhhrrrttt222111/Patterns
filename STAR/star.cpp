#include <iostream>

using namespace std;
int main()
{

     int i,j,rows;
    cout<<"Enter the number of rows: ";
     cin>>rows;
    // //Takes input from user for rows
    
     for(i=1;i<=rows;i++)
     {
         for(j=1;j<=rows;j++)
         {
             cout<<"  ";
         }
        for(j=rows;j>=i;j--)
         {
             cout<<" ";
         } 
         for(j=1;j<=i;j++)
         {
             cout<<"* ";
         }
         cout<<endl;
     }


    for(i=1;i<=rows;i++)

     {
         for(j=1;j<i;j++)
         {
             cout<<" ";
         }
        for(j=rows;j>=i;j--)
         {
             cout<<"* ";
         }
         for(j=1;j<i;j++)
         {
             cout<<" ";
         }
         for(j=1;j<=rows;j++)
         {
             cout<<"  ";
         }
          for(j=1;j<i;j++)
         {
             cout<<" ";
         } 

        for(j=rows;j>=i;j--)
         {
             cout<<"* ";
         } 
         cout<<endl;

     }

for(i=1;i<=rows;i++)
     {  
     for(j=rows;j>i;j--)
         {
             cout<<" ";
         }  
    for(j=1;j<=i;j++)
         {
             cout<<"* ";
         }
    for(j=rows;j>i;j--)
         {
             cout<<" ";
         } 
    for(j=1;j<=rows;j++)
         {
             cout<<"  ";
         }  
    for(j=rows;j>i;j--)
         {
             cout<<" ";
         } 
   for(j=1;j<=i;j++)
         {
             cout<<"* ";
         } 
         cout<<endl;
     }

for(i=1;i<=rows;i++)
     { 
        for(j=1;j<=rows;j++)
         {
             cout<<"  ";
         } 

       for(j=1;j<i;j++)
         {
             cout<<" ";
         }
        for(j=rows;j>=i;j--)
         {
             cout<<"* ";
         } 
      cout<<endl;
     }

    return 0;
}

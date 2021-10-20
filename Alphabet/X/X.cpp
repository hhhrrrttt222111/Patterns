#include<iostream>
using namespace std;
 int main()
 {
     int n ;
     cout << "Enter the value of n \n";
     cin >> n;
     for( int i = 1; i <= n; i++){
         for( int j = 1; j <= n; j++)
         {
             if(j == i || j == (n + 1 - i))
              cout << "*";
             else 
              cout << " ";
         }
         
         cout << endl;
     }
     
     return 0;
 }
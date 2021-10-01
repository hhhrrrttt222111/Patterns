/*
   AAAAAAA        AAAAAA
   AAAAAAAAA      AAAAAAAA
  AAAAAAAAAAA    AAAAAAAAAA
 AAAAAAAAAAAAA  AAAAAAAAAAAA
AAAAAAAAAAAAAAAAAAAAAAAAAAAAA
BBBBBBBBBBBBBBBBBBBBBBBBBBBBB
 BBBBBBBBBBBBBBBBBBBBBBBBBBB
  BBBBBBBBBBBBBBBBBBBBBBBBB
   BBBBBBBBBBBBBBBBBBBBBBB
    BBBBBBBBBBBBBBBBBBBBB
     BBBBBBBBBBBBBBBBBBB
      BBBBBBBBBBBBBBBBB
       BBBBBBBBBBBBBBB
        BBBBBBBBBBBBB
         BBBBBBBBBBB
          BBBBBBBBB
           BBBBBBB
            BBBBB
             BBB
              B
*/

#include<iostream>
using namespace std;
   
int main()
{
    int a, b, size = 15;
   
    /* FOR THE APEX OF HEART */
    for (a = size/2; a <= size; a = a+2)
    {
        for (b = 1; b < size-a; b = b+2)        
            cout<<" ";
   
        for (b = 1; b <= a; b++)
            cout<<"A";
    
        for (b = 1; b <= size-a; b++)
            cout<<" ";
           
        for (b = 1; b <= a-1; b++)
            cout<<"A";
   
        cout<<endl;
    }
   
    /*FOR THE BASE OF HEART ie. THE INVERTED TRIANGLE */
   
    for (a = size; a >= 0; a--)
    { 
        for (b = a; b < size; b++)
            cout<<" ";
   
        for (b = 1; b <= ((a * 2) - 1); b++)
            cout<<"B";
   
        cout<<endl;  
    }
}

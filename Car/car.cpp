/*                  CAR FRONT VIEW
                   ***************                
                  *               *  
                 *                 * 
                *                   *
               ***********************
               *******        ********
               ***********************
                **                 **                 */ 

#include<iostream>
using namespace std;
int main()
{
    int n=23;
cout<<endl;
cout<<"     CAR FRONT VIEW"<<endl;

   for(int i=0;i<9;i++)
   {
    for(int j=0;j<n;j++)
    {
        if(i==0)
        {
            if((j>3)&&(j<19))
            {
                cout<<"*";      
            }
            else
            cout<<" ";
        }
        else if(i==1)
        {
            if((j==3)||(j==19))
            {
                cout<<"*";
            }
            else
            cout<<" ";
        }
         else if(i==2)
        {
            if((j==2)||(j==20))
            {
                cout<<"*";
            }
            else
            cout<<" ";
        } 
        else if(i==3)
        {
            if((j==1)||(j==21))
            {
                cout<<"*";
            }
            else
            cout<<" ";
        }
       

        else if((i==4)||(i==6))
        {
          cout<<"*";
        } 

        else if(i==5)
        {
            if((j<7)||(j>14))
            {
          cout<<"*";
            }
            else
            cout<<" ";
        }  

        else if(i==7)
        {
            if((j==1)||(j==2)||(j==19)||(j==20))
            {
            cout<<"*";
            }
            else
            cout<<" ";
        }
    }
    cout<<endl;
   }
    return 0;
}
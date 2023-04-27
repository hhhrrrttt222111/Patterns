#include <iostream>
using namespace std;
int main()
{
    int i, j, k;
		    for (i = 0; i <= 10; i++)
		    {
		        for (j = 0; j < 1; j++)
		        {
		        	cout<<"* ";
		        }
		        for (k = 1; k < 5; k++)
		        {   
		        	cout<<(i < 1 || i > 4 && i< 6 ? "* " : "");
		        }
		        cout<<"\n";
		    }
}


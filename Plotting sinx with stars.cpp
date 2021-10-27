//Sin(x) graph using stars**

#include<iostream>
using namespace std;
#include<math.h>
#define pi 3.14
int main ()
{
  int k,g,f,w,c ;
  int  scl, half;
  float extent=4*pi ,x;
  w= 30;    //depending on the number of characters it will fit into widhtwise
  half = 15;  // depending on the number of characters it fit into lenghtwise 
  scl= half/2;  // so that graph gets restricted between 1 and -1
// plotting for the negative axis
  for (k=0; k<=half;k++) 
{ 
  x=(-4*pi); // graph from -4pi to 4pi
  g=(int)(scl-k); 
  for(c=0;c<=w-1;c++) 
 {
  f=(int) (scl*(sin (x))); 
  if(f==g)
  cout<<"*";
  else
  cout<<" ";
  x=x+(extent /w); // incrementing x with (-4pi/30) ie. decrementing it with 4pi/30
  }
//plotting for the postive axis
x=0;
g=(int)(scl-k);
 for(c=0;c<=w-1;c++) 
 {
  f=(int) (scl*(sin(x))); 
  if(f==g)
   cout<<"*" ;
  else
  cout<<" ";
  x=x+(extent /w); // incrementing x with (4pi/30)
 }
cout<<endl;
}
return 0;
}

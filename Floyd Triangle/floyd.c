#include<stdio.h>

int main()
{
  int n;
   n=5;
  int k=1;
  int i,j;
  for( i=1;i<=n;i++)
  {
    for( j=1;j<=n;j++)
    {
      if(i>=j)
      {
        printf("%d ",k);
        k++;
      }
      else
      {
        printf(" ");
      }


    }
    printf("\n");

  }
  

  
}
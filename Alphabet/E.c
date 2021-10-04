#include<stdio.h>
int main()
{

 int num=5,r,c;
 for(r=1; r<=num; r++)
 {
   if(r%2==0)
      printf("*");
   else if(r%3==0)
   {
      for(c=1; c<=r; c++)
          printf("*");
   }
   else
   {
      for(c=1; c<=num; c++)
          printf("*");
   }
   printf("\n");
 }
 getch();
 return 0;
}

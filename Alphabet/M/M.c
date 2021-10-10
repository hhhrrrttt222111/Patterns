#include <stdio.h>

int main()
{
   int i,j;
   for(i=1;i<=7;i++)
   {
       for(j=1;j<=7;j++)
       {
           if(j==1||(j==7)||(i==j&&i<5)|| (i+j==8&&i<5) ){
               printf("* ",j);
           }
           else
           {
               printf("  ");
           }
       }
       printf("\n");
   }

    return 0;
}
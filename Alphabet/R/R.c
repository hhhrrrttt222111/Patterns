#include <stdio.h>
//Printed R alphabet in star pattern
int main()
{
   int i,j;
   for(i=1;i<=7;i++)
   {
       for(j=1;j<=5;j++)
       {
           if(j==1||(i==1&&j<5)||(i==4&&j<5)|| (j==5&&i>1&&i<4) || (i-j==2))
           {
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
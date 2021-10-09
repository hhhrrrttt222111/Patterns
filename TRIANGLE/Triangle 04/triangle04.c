#include<stdio.h>

int main()
{   char ch = 65;
    int num = 5;
    for(int i=0; i<num; i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("%c ", ch);
        }
        ch++;
        printf("\n");
    }
     return 0;
}

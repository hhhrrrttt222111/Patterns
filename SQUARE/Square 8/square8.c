#include <stdio.h>

int main()
{
    int num = 5;
    char ch = 64;
    for( int i = num; i >0; i--)
    {
        for( int j = 5; j > 0; j--)
        {
            printf("%c", ch+i);
        }
        printf("\n");
    }

    return 0;
}

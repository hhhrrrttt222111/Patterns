#include <stdio.h>
int main()
{
    // number of rows
    int n = 5;
    int i, j;
 
    for (i = 1; i <= n; i++)
    {
        // print space
        for (j = i; j < n; j++) {
            printf(" ");
        }
 
        // print `n` stars
        for (j = 1; j <= n; j++) {
            printf("*");
        }
 
        // move to the next row
        printf("\n");
    }
 
    return 0;
}

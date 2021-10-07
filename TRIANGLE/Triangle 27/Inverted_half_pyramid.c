#include <stdio.h>
int main() {
   int i, j, r;
   printf("Enter the number of rows: ");//getting the number of rows from the user
   scanf("%d", &r);
   for (i = r; i >= 1; --i) {
      for (j = 1; j <= i; ++j) {
         printf("%d ", j);
      }
      printf("\n");
   }
   return 0;
}
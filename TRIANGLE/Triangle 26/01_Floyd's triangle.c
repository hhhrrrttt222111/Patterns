#include <stdio.h>

int main() {
   int r, i, j, num = 1;
   printf("Enter the number of rows you want: ");
   scanf("%d", &r);
   for (i = 1; i <= r; i++) {
      for (j = 1; j <= i; ++j) {
         printf("%d ", num);
         ++num;
      }
      printf("\n");
   }
   return 0;
}

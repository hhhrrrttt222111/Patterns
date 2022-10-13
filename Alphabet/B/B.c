#include <stdio.h>
int main()
{
    int n;
    printf("Size: ");
    scanf("%d",&n);
    for(int i=0; i < 5; i++){
      for(int j=0; j < n+1; j++){
        if(j!=0){
          if((i==0 || i== 4) && j<n) {
           printf("#");
          }else if((i==1|| i==3) && j==n) {
           printf("#");
          }else if(i==2 && j!= 1 && j < n){
            printf("#");
          }
          else{
            printf(" ");
          }
        }else{
           printf("#");
        }
      }
       printf("\n");

    }
    return 0;
}
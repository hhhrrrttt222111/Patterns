#include<stdio.h>

int main()

{

int i,j,k,l,n;

printf("enter n: ");

scanf("%d",&n);


for(i=1;i<=n;i++)

{

for(j=1;j<=n-i;j++)

printf(" ");

for(k=1;k<=2*i-1;k++)

printf("*");

for(j=1;j<=2*(n-i);j++)

printf(" ");

for(l=3;l<=i;l++)

printf("*");

printf("\n");

}


for(i=n-1;i>=1;i--)

{

for(j=1;j<=n-i;j++)

printf(" ");

for(k=1;k<=2*i-1;k++)

printf("*");

for(j=1;j<=2*(n-i);j++)

printf(" ");

for(l=3;l<=i;l++)

printf("*");

printf("\n");

}

return 0;

}

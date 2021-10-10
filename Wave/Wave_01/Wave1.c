#include<stdio.h>

void main() {
	 int waveHeight=4;
	 int WL=4;
	 int WH=waveHeight-1;
	 int x=WH;
	 int i,j;
	 for(i=0;i<=WH;i++) {
		 for(j=0;j<=WH*WL*2;j++) {
			 if(j%(WH*2)==x||j%(WH*2)==WH+i) {
				 printf("*");
			 }
			 else {
				 printf(" ");
			 }
		 }
		 x--;
		 printf("\n");
	 }
 }

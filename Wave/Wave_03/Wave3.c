#include<stdio.h>
 void main() {
	 int is=1;
	 int os=2;
	 int WL=5;
	 int WH=5;
	 int i,j,k;
	 for(i=1;i<=WH;i++) {
		 for(j=1;j<WL;j++) {
			 for(k=1;k<=os;k++) {
				 printf(" ");
			 }
			 printf("0");
			 for(k=1;k<=is;k++) {
				 printf(" ");
			 }
			 printf("0");
			 for(k=1;k<=os;k++) {
				 printf(" ");
			 }
			 printf(" ");
		 }
		 os=(i+1!=WH);
		 is=(i+1!=WH)?3:5;
		 printf("\n");
	 }
 }

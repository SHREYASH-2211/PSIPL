#include<stdio.h>

int main(){

	int r;
	printf("Enter the number :");
	scanf("%d",&r);
	for(int j=1;j<=r;j++ ){ //row loop
 		for(int i=1;i<=j;i++)//star loop
 			printf("*");
 			printf("\n");
 			
 		}
 return 0;
 }			

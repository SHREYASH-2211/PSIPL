#include<stdio.h> 
int main(){ 

    int n; 
    printf("Enter the number :"); 
    scanf("%d",&n); 
 
    for(int j=1;j<=n;j++){ //row loop 
 
    	for(int sp=1;sp<=n-j;sp++) 
			printf(" "); 
 		for(int i=1;i<=j;i++)//star loop 
 			printf("*"); 
 			printf("\n"); 
 		} 
 		printf("\n\n"); 
 	for(int j=1;j<=n;j++){ //row loop 
 		for(int sp=1;sp<=n-j;sp++) 
 			printf(" "); 
 		for(int i=1;i<j*2;i++)//star loop 
 			printf("*"); 
 			printf("\n"); 
 		} 
 
 			printf("\n\n"); 
 	for(int j=1;j<=n;j++){ //row loop 
 		for(int sp=1;sp<=n-j;sp++) 
 		printf(" "); 
 		char b='A'; 
 	for(int i=1;i<=j;i++){//left triangle loop 
 		printf("%c",b); 
 		b++; 
 	} 
 		b-=2; 
 	for(int i=1;i<=j-1;i++){//right triangle loop 
 		printf("%c",b); 
 		b--; 
 	} 
 
 	printf("\n"); 
 } 
 	return 0; 
 }

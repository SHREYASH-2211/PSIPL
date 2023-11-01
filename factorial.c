#include<stdio.h>

int factorial(int j);

int main(){

	int num,fact;
	printf("Enter a number \n");
	scanf("%d",&num);
	fact=factorial(num);
	printf("Factorial of %d! is %d \n",num,fact);

	
	return 0;
}


int factorial(int j){
	int i, fact=1;
	for(i=1;i<=j;i++){
	fact=fact*i;
	}
	return fact;
}



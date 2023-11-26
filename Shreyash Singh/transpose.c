#include<stdio.h>

void read(int m, int n, int arr[m][n]){
	for(int i=0 ;i<m ;i++){
		for(int j=0; j<n; j++){
			scanf("%d",&arr[i][j]);
		}
	}	
}
void print(int m, int n, int arr[m][n]){
	for(int i=0 ;i<m ;i++){
		for(int j=0; j<n; j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}	
}

void transpose(int m , int n, int arr[m][n] , int res[m][n]){
	for(int i=0; i<n; i++){
		for(int j=0;j<n;j++){
		res[i][j]=arr[i][j];
		}
	}
}

int main(){

	int m1,n1,m2,n2;
	printf("Enter the dimension of first matrix");
	scanf("%d %d",&m1,&n1);
	int arr1[m1][n1];
	printf("Enter the element of first matrix");
	read(m1,n1,arr1);
	printf("Enter the dimension of second matrix");
	scanf("%d %d",&m2,&n2);
	int arr2[m2][n2];
	printf("Enter the element of second matrix ");
	read(m2,n2,arr2);
	
	if(m1==m2 && n2==n1){
	int res[m1][n1];
	transpose(m,n,arr,res);
	printf("Resultant matrix \n");
	print(m1,n1,res);
	}
return 0;
}

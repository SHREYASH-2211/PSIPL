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

void MultMat(int m1, int n1, int n2, int m2, int arr1[m1][n1], int arr2[m2][n2] , int res[m1][n2]){
for(int i=0 ;i<m1 ;i++){
		for(int j=0; j<n2; j++){			
		res[i][j]=0;
		}
	
}

	for(int i=0 ;i<m1 ;i++){
		for(int j=0; j<n2; j++){
			for(int k=0;k<n1;k++){
		res[i][j]+=arr1[i][k]*arr2[k][j];
		}
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
	
	if(n2==m1){
	int res[m1][n1];
	MultMat(m1,n1,n2,m2,arr1,arr2,res);
	printf("Resultant matrix \n");
	print(m1,n2,res);
	
	
	}
return 0;
}

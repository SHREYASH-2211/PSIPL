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
		for(int j=0;j<m;j++){
		res[i][j]=arr[j][i];
		}
	}
}

int main(){

	int m,n;
	printf("Enter the dimension of first matrix");
	scanf("%d %d",&m,&n);
	int arr[m][n];
	printf("Enter the element of first matrix");
	read(m,n,arr);
	
	int res[n][m];
	transpose(m,n,arr,res);
	printf("Resultant matrix \n");
	print(n,m,res);
	
return 0;
}

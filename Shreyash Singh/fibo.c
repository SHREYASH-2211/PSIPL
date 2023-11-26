#include<stdio.h>


int fibo(int a){
int ans=0;
	if (a==1||a==2){
	   return 1;
	   }
	else{
	  ans=fibo(a-2)+fibo(a-1);
	  
	}
return ans;
}

int main(){

	int a;
	scanf("%d",&a);
	
	int ans=fibo(a);
	printf("The fibonacci series is %d",ans);
	
	
return 0;
}

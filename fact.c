#include<stdio.h>


int fact(int a){
int ans;
	if (a==0){
	   return 1;
	   }
	else{
	  ans=a*fact(a-1);
	  
	}
return ans;
}

int main(){

	int a;
	scanf("%d",&a);
	
	int ans=fact(a);
	printf("The factorial is: %d",ans);
	
	
return 0;
}

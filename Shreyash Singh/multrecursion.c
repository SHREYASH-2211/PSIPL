#include<stdio.h>

int mul(int a, int b){
int ans;

	if(b==0){
		return 0;
}
	else{
		ans=a+mul(a,b-1);
}

	return ans;
}

int main(){

	int a,b;
	scanf("%d %d",&a,&b);
	
	int ans=mul(a,b);
	printf("The multiplication is %d",ans);
	
	
return 0;
}


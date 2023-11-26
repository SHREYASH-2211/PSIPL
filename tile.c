#include<stdio.h>

int tile(int l, int b){
int ans=0;

if(l==0 && b==0){
	return 0;

}
else if(l%2==0 && b%2==0){
	ans=tile(l/2,b/2);

}
else if(l%2==0 && b%2==1){
	ans=l+tile(l/2,b/2);

}
else if(l%2==1 && b%2==0){
	ans=b+tile(l/2,b/2);
	
}
else if(l%2==1 && b%2==1){
	ans=l+b-1+tile(l/2,b/2);
	
}

return ans;
}
int main(){
 
	int l,b;
		printf("Enter length and breadth of room:");
			scanf("%d%d",&l,&b);
	
	int ans=tile(l,b);

		printf("Length of room=%d Breadth of room=%d\n",l,b);
	
		printf("Area of room is=%d\n",ans);
	
return 0;
}



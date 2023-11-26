#include<stdio.h>

int main(){

int flag=0,i;
scanf("%d",&i);
char a[i],b[i];
scanf("%s",a);
scanf("%s",b);

	while(a[i]!='\0'&&b[i]!='\0'){
	
		if(a[i]!=b[i]){
			flag++;
			break;
	}
	i++;
	}
	
	if(flag!=0){
			printf("It is not same ");
			}
	else{
		printf("It is same");
	}
	
return 0;
}

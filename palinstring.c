#include<stdio.h>

int main(){
	
	int flag=0,n;
	scanf("%d",&n);
	char str[n];	
	scanf("%s",str);
	
	for(int i=0;i<n/2;i++){
			if(str[i]!=str[n-i-1]){
				flag++;
				break;
				}
			}	
	if(flag!=0){
		printf("It is not a palindrome %s",str);
		}
	else{
		printf("It is a palindrome %s",str);
		}
	return 0;
	}

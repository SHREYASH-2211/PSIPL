#include<stdio.h>
#include<stdbool.h>
bool isCoPrime(int num1, int num2){
  int fact=0;
  for (start; start <= end; start++) {
        int fact = 0; // 

        for (int i = 2; i <= start / 2; i++) {
            if (start%i == 0) {
            	if(end%i==0){
                fact++; 
                break;
                }
            }
        }

      if(fact==0){
      	return true;
      	}
     	else{
     		return 0;
     		}
     		
 }
 }
int main(){
	int start,end;
	scanf("%d",&start);
	scanf("%d",&end);
	isCoprime(start,end);
	return 0;
	}

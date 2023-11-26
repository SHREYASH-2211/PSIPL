#include<stdio.h>


int amicable(int n){

int sum=0;

for(int i=1;i<n;i++){
		if (n%i==0){
			sum+=i;
			}
		}
			return sum;
}
int main(){

int start,end,sum1,sum2;

	printf("Enter a range of number");
	scanf("%d %d",&start,&end);
	sum1=amicable(start);
	sum2=amicable(end);
	if(start==sum2 && end==sum1){
		printf("Numbers are amicable");
		}
		else{
		printf("Numbers are not amicable");
		}
	return 0;
	}

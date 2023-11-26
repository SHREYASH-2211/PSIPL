#include<stdio.h>
#include<math.h>
int main(){

int num=0,temp=0,rem=0,arm=0,count=0;

printf("Enter number for Armstrong");
scanf("%d",&num);
temp=num;
while(temp>0){

	temp=temp/10;

	count=count+1;
}
temp=num;

while(temp>0){

rem=temp%10;
arm=arm+round(pow(rem,count));
temp=temp/10;
}
//printf("arm is is: %d",arm);
printf("%d",arm);
if(arm==num){
    
printf("It is a Armstrong no.\n");
}
else{
printf("It is not a Armstrong no.\n");
}
return 0;
}
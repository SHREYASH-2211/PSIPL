#include<stdio.h>
int main(){
    int num;
    printf("Enter a no.");
    scanf("%d",&num);
    if(num>100||num<0){
        printf("Error");
        return 0;
    }
    if(num>90){
        printf("grade O");
    }
    else if(num>70){
        printf("grade A");
    }
    else if(num<=50){
        printf("grade Fail");
    }
    return 0;
}

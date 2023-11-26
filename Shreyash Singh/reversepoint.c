

#include<stdio.h>

int reverse(int *arr,int n){

    for(int i=0;i<n;i++){

        int *start=arr;
        int *end=arr+n-1;

        while(start<end){
            int temp=*start;
            *start=*end;
            *end=temp;

            *start++;
            *end--;
        }
    }
    printf("Reversed array are: ");

    for(int i=0;i<n;i++){
        printf("%d ",*(arr+i));
    }
}

int main(){

    
    int size;
    printf("Enter size of an array\n");
    scanf("%d",&size);

    int arr[size];

    printf("Enter elements\n");

    for(int j=0;j<size;j++){
        scanf("%d",&arr[j]);
    }

    printf("Your elements:- ");

    for(int j=0;j<size;j++){
        printf("%d ",arr[j]);
    }
    printf("\n");


    reverse(arr,size);
}
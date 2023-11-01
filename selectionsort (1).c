#include<stdio.h>

void selectionsort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    printf("Selection sort are");
    for(int i=0;i<n;i++){
        printf(" %d",arr[i]);
    } printf("\n");
}


int main(){

    int n;
    printf("Size of an element");
    scanf("%d",&n);
   
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    selectionsort(arr,n);

    return 0;
}


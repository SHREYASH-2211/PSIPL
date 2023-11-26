// Write a program to swap smallest and largest element in an array using pointers

#include <stdio.h>

void swap(int *arr, int n) {
    int *min =(arr+n-1), *max = arr;

    for (int i = 0; i < n; i++) {
        if (*(arr+i) < *min) {
            min = arr+i;
        }
        if (*(arr+i) > *max) {
            max = arr+i;
        }
        
    }
    int temp = *min;
    *min = *max;
    *max = temp;

    printf("Swapping of the no. is ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {

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
        printf("%d",arr[j]);
    }
    

    swap(arr, size);

    return 0;
}

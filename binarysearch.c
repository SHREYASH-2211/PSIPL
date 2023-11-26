#include <stdio.h>
int binarySearch(int n, int arr[], int key) {
    int start = 0;
    int end = n;
    while (start <= end) {
        int mid = (start + end) / 2;
        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1;
}
int main() {
    int n;
    printf("Enter a size \n");
    scanf("%d", &n);
    printf("Enter a element \n");
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int key;
    printf("Enter a no. to check \n");
    scanf("%d", &key);
    int ans=binarySearch(n, arr, key);
    
    if(ans==-1){
      printf("%d doesn't exist", key);
      }else{
      printf("%d is in position no. %d",key, ans);
      }
    return 0;
}


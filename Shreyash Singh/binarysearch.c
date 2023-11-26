#include<stdio.h>

void binary_search(int arr[],int element) {
   int start = 0, end =max_size, mid, max_size;
   
   while (start <= end) {
	  mid = (start+end)/2;

	  if (arr[mid]==element) {
         printf("\nSearch Element  : %d  : Found :  Position : %d.\n", element, mid+1);
         break;
	  }
      else if (arr[mid] < element)
         start=mid+1;    
      else
         end =mid-1;
   }
   
   if (start > end)
      printf("\nInvalid  \n", element);
}

int main() {
    int arr_search[max_size],i,element;

    printf("Enter a size\n");
    printf("\nEnter %d Elements for Searching : \n", max_size);
    for (i = 0; i < max_size; i++)
        scanf("%d", &arr_search[i]);

	printf("Enter Element to Search : ");
    scanf("%d", &element);
   

    binary_search(arr_search,element);
    
    return 0;
    }

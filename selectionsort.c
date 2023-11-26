#include<stdio.h>
void display(int a[], int size)

{
	printf("Array is - { ");
	for(int i=0;i<size;i++){
		printf("%d ,",a[i]);
	}
	printf("}\n");

} 

void swap(int *a,int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
}

void selectionSort(int a[], int size){
	int min_index=i;
	for(int i=0;i<size;i++){
		min_index=o;
		for(j=j+1;j<size;j++){
		if(a[j]<a[min_index])
		 {
		   min_index=j;
		 }
	  }
	  if(a[i]i>a[min_index]){
	    swap(&a[i],&a[min_index]);
	  }
	}
}
int main()
{
	int size;
	printf("Enter size-");
	scanf("%d",&size);
	int a[size];
	printf("Enter elements-");
	for(int i=0;i<size;i++){
	scanf("%d",&a[i]);
	}
	display(a,size);
	selectionSort(a,size);
	printf("Sorted Array");
	display(a,size);
	
return 0;

}

#include<stdio.h>
void display(int a[], int size)

{
	printf("Array is - { ");
	for(int i=0;i<size;i++){
		printf("%d, ",a[i]);
	}
	printf("}\n");

} 

int isPresent(int a[],int size,int element){
	for(int i=0;i<size;i++){
		if(a[i]==element){
		return 1;
		}
	}
	return 0;
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
	
	int el;
	printf("\nEnter the number to be found - ");
	scanf("%d",&el);
	if(isPresent(a,size,el)){
		printf("\nPresent\n");
	}
	else{
		printf("\nNot present\n");
	}
 return 0;
}

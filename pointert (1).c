#include<stdio.h>
void swap(int *a,int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;

printf("\n After Swapping ,a=%d, b=%d",*a,*b);
}

int main(){

	int a=5,b=7;
	printf("\n Before Swapping ,a=%d, b=%d",a,b);
	swap(&a,&b);
	printf("\n In main After Swapping ,a=%d, b=%d\n",a,b);
	int *p;
	/*p=&a;
	printf("*p= %d\n",*p);
	printf("%p\n",p);*/
	return 0;
	
}

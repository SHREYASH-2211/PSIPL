#include<stdio.h>
#include<string.h>
struct vehicle{
	char reg[10];
	char name[100];
	char address[100];
};

int main(){
	FILE *fp;
	struct vehicle s;
	char n[10];
	printf("Enter the registration number: ");
	scanf("%s", n);
	fp=fopen("vehicle.txt","r");
	int flag=0;
	while(fscanf(fp,"%s %s %s",s.reg,s.name,s.address)!=EOF){
	if(strcmp(n,s.reg) == 0){
    	printf("Registration:%s Name:%s Address:%s\n",s.reg,s.name,s.address);
    	flag=1;
    	break;  
	}	}
	if(flag!=1){
    	printf("Invalid registration no.\n");
	}
	fclose(fp);
	return 0;

}
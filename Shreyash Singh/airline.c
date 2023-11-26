#include<stdio.h>
#include<string.h>

struct flights{

char src[4];
char dest[4];
int depart;
int arrival;
int seats;
};

void read_flights(struct flights f[],int n){
	
	for(int i=0;i<n;i++){
		scanf("%s",f[i].src);
		scanf("%s",f[i].dest);
		scanf("%d",&f[i].depart);
		scanf("%d",&f[i].arrival);
		scanf("%d",&f[i].seats);
	}
}
void book_flight(char sp[],char ep[],struct flights f[] ,int n){
	// int flag=0;
	for(int i=0;i<n;i++){
		if(strcmp(sp,f[i].src)==0 && strcmp(ep,f[i].dest)==0){
				if(f[i].seats){
				// flag=1;
				// printf("\nCongratulation!");
                printf(" ____________________________________________\n");
                printf("|Source | Destination | Departure | Arrival |\n");
                printf("---------------------------------------------\n");
				printf("|  %s |      %s     |    %d    |   %d |\n",sp,ep,f[i].depart,f[i].arrival);
                printf("---------------------------------------------");
                printf("has been sucessfully booked");
				f[i].seats--;
				}else{
                printf("\n Sorry no seats available");
            }
		}
	}
	// if(flag==0){
	
	// }
}
int main(){

int n,m;
printf("\nEnter no. of flights\n");
scanf("%d",&n);
struct flights flight[n];

read_flights(flight,n);
printf("\nEnter no. of bookings\n");
scanf("%d",&m);
char sp[4],ep[4];

	for(int i=0;i<m;i++){
		printf("\nEnter  Source\n");
		scanf("%s",sp);
		printf("\nEnter  Destination\n");
		scanf("%s",ep);
		book_flight(sp,ep,flight,n);
	}

return 0;
}

#include <stdio.h>

void prime_range(int start,int end){

    for (start; start <= end; start++) {
        int fact = 0; // 

        for (int i = 2; i <= start / 2; i++) {
            if (start % i == 0) {
                fact = 1; 
                break;
            }
        }

        if (start!=1 && fact==0) {
            printf("%d is a prime number\n", start);
        }
    }

  
}
int main() {
    int start, end;
    printf("Enter the 1st number: ");
    scanf("%d", &start);
    printf("Enter the last number: ");
    scanf("%d", &end);
    prime_range(start,end);
    return 0;
    
    }

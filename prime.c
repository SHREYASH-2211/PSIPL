#include <stdio.h>

int main() {
    int start, end;

    printf("Enter the 1st number: ");
    scanf("%d", &start);
    printf("Enter the last number: ");
    scanf("%d", &end);

    

    for (start; start <= end; start++) {
        int fact = 0; // Reset fact to 0 

        for (int i = 2; i <= start / 2; i++) {
            if (start % i == 0) {
                fact = 1; // Set fact to 1 if a factor is found
                break;
            }
        }

        if (start!=1 && fact==0) {
            printf("%d is a prime number\n", start);
        }
    }

    return 0;
}

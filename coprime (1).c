#include <stdio.h>
#include <stdbool.h>

bool isCoPrime(int num1, int num2) {
    if (num1 == 1 || num2 == 1) {
        return true; 
    }

    for (int i = 2; i <= num1 / 2; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            return false; 
        }
    }
    return true; 
}

int main() {
    int start, end;
    printf("Enter two numbers: ");
    scanf("%d %d", &start, &end);

    if (isCoPrime(start, end)) {
        printf("%d and %d are coprime.\n", start, end);
    } else {
        printf("%d and %d are not coprime.\n", start, end);
    }

    return 0;
}


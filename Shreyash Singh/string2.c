#include <stdio.h>

int lengths(char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int compare(char *str1, char *str2) {
    while (*str1 && *str2) {
        if (*str1 != *str2) {
            return 0;
        }
        str1++;
        str2++;
    }
    return (*str1 == '\0' && *str2 == '\0');
}

void reverse(char *str) {
    int length = lengths(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

void concatenate(char *str1, char *str2) {
    int length1 = lengths(str1);
    int length2 = lengths(str2);

    for (int i = 0; i < length2; i++) {
        str1[length1 + i] = str2[i];
    }
    str1[length1 + length2] = '\0';
}

void toUpperCase(char *str) {
    while (*str) {
        if (*str >= 'a' && *str <= 'z') {
            *str = *str - 'a' + 'A'; 
        }
        str++;
    }
}

int main() {
    char str1[100], str2[100], original[100], reversed[100]; 
    int choice = 0;

    printf("Enter the first string: ");
    scanf("%s", str1);

    for (int i = 0; i < lengths(str1); i++) {
        original[i] = str1[i];
    }
    original[lengths(str1)] = '\0';

    for (int i = 0; i < lengths(str1); i++) {
        reversed[i] = str1[i];
    }
    reversed[lengths(str1)] = '\0';

    while (choice <= 6) {
        printf("\nMenu:\n");
        printf("1. Copy one string to another character by character\n");
        printf("2. Find the string length\n");
        printf("3. Compare two strings\n");
        printf("4. Reverse the string\n");
        printf("5. Concatenate one string to another string\n");
        printf("6. Convert to Uppercase\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                for (int i = 0; str1[i] != '\0'; i++) {
                    str2[i] = str1[i];
                }
                str2[lengths(str1)] = '\0';
                printf("Copied string: %s\n", str2);
                break;

            case 2:
                printf("Length of the string: %d\n", lengths(str1));
                break;

            case 3:
                printf("Enter the second string to compare: ");
                scanf("%s", str2);
                if (compare(str1, str2)) {
                    printf("Strings are equal.\n");
                } else {
                    printf("Strings are not equal.\n");
                }
                break;

            case 4:
                reverse(reversed); 
                printf("Reversed string: %s\n", reversed);
                break;

            case 5:
                printf("Enter the second string to concatenate: ");
                scanf("%s", str2);
                concatenate(original, str2); 
                printf("Concatenated string: %s\n", original);
                break;

            case 6:
                toUpperCase(str1); 
                printf("Uppercase string: %s\n", str1);
                break;

            default:
                printf("Invalid choice.\n");
                break;
        }
    }
    return 0;
}

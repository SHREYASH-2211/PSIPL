#include <stdio.h>
#include <string.h> 
int pal(char word[]) { 
    int i,j;
    int isPalindrome=1;  
    int len = strlen(word);

    for (i=0,j=len-1;i<=j,j>=0;i++,j--) {
        if (word[i]!=word[j]) {
            isPalindrome=0; 
            break;
        }
    }

    return isPalindrome;
}

int main() {
    char str[100];
    printf("ENTER THE SENTENCE YOU WANT TO CHECK: ");
    scanf(" %[^\n]",str); 

    char word[30];
    int k=0;
    int i,count=0;

    for (i=0;str[i]!='\0';i++) {
        if (str[i]!=' ') {
            word[k]=str[i];
            k++;
        } else {
            word[k]='\0';

            if (pal(word)== 1) {
                printf("%s ",word);
                count++;
            }
            k=0;
        }
    }

    word[k] ='\0';

    if (pal(word)==1) {
        printf("%s",word);
        count++;
    }

    printf("\n");
    printf("THE NUMBER OF PALINDROME WORDS ARE: %d\n",count); 
    return 0;
}

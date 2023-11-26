#include <stdio.h>

int main() {
    char str[] = "Chanting God";
    int vowel = 0, consonant = 0, totalCharacters = 0, words = 0, i, inWord = 0;

    for (i = 0; str[i] != '\0'; i++) {//vowel
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            vowel++;
        } else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {//consonant
            consonant++;
        }
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {//total characters
            totalCharacters++;
        }
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {//words
            inWord = 0;
        } else if (!inWord) {
            inWord = 1;
            words++;
        }
    }

    printf("Vowel is %d\n", vowel);
    printf("Consonant is %d\n", consonant);
    printf("Total Characters is %d\n", totalCharacters);
    printf("Words is %d\n", words);

    return 0;
}

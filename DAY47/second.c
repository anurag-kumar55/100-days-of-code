// Find the longest word in a sentence.

#include <stdio.h>
int main() {
    char str[200], word[50], longest[50];
    int i = 0, j = 0, maxLen = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {

        if (str[i] != ' ' && str[i] != '\n') {
            word[j] = str[i];
            j++;
        } else {
            word[j] = '\0'; 

            if (j > maxLen) {
                maxLen = j;
                int k = 0;
                while (word[k] != '\0') {
                    longest[k] = word[k];
                    k++;
                }
                longest[k] = '\0';
            }
            j = 0; 
        }

        i++;
    }
    word[j] = '\0';
    if (j > maxLen) {
        int k = 0;
        while (word[k] != '\0') {
            longest[k] = word[k];
            k++;
        }
        longest[k] = '\0';
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);

    return 0;
}
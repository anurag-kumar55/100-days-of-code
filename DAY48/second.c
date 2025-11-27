// Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>

void reverseWord(char str[], int start, int end) {
    while(start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
int main() {
    char str[200];
    int i = 0, start = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    while(str[i] != '\0') {
        if(str[i] == ' ') {
            reverseWord(str, start, i - 1);
            start = i + 1;
        }
        i++;
    }
    reverseWord(str, start, i - 1);

    printf("Output: %s", str);
    return 0;
}
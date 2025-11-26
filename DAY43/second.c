// check if a string is a palindrome.
#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j, len = 0;

    printf("Enter a string: ");
    scanf("%s", str);   
    while (str[len] != '\0') {
        len++;
    }

    j = len - 1;
    while (i < j) {
        if (str[i] != str[j]) {
            printf(" string is not a Palindrome");
            return 0;
        }
        i++;
        j--;
    }

    printf(" stiring is Palindrome");
    return 0;
}

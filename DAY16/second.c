//Wap to check if a number is a palindrome.
#include <stdio.h>

int main() {
    int n, reversed = 0, rem, original;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;  

    while (n > 0) {
        rem = n % 10;                
        reversed = reversed * 10 + rem; 
        n = n / 10;                   
    }

    if (original == reversed)
        printf("It is a palindrome number.");
    else
        printf("It is not a palindrome number.");

    return 0;
}
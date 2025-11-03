//WAP to check if a number is prime.
#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n <= 1) {
        printf("%d is not prime", n);
        return 0;
    }
    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            printf("%d is not prime", n);
            return 0;
        }
    }
    printf("%d is prime", n);
    return 0;
}
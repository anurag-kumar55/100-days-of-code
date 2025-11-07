//WAP to find the 1's compliment of a binary number and print it.
#include <stdio.h>
int main() {
    long long n;
    printf("Enter binary: ");
    scanf("%lld", &n);
    printf("1's complement: ");
    while(n > 0) {
        int digit = n % 10;
        printf("%d", digit == 0 ? 1 : 0);
        n /= 10;
    }
    return 0;
}
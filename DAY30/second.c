// Count positive,negative,and zero elements in an array.
#include <stdio.h>
int main() {
    int a[100], n, i;
    int pos = 0, neg = 0, zero = 0;
    printf("Enter how many numbers: ");
    scanf("%d", &n);
    printf("Enter the numbers:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for(i = 0; i < n; i++) {
        if(a[i] > 0)
            pos++;
        else if(a[i] < 0)
            neg++;
        else
            zero++;
    }
    printf("Positive numbers = %d\n", pos);
    printf("Negative numbers = %d\n", neg);
    printf("Zeroes = %d\n", zero);
    return 0;
}
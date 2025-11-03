//WAP to find the sum of the series: 1+3/4+5/6+7/8+.. upto n terms.
#include <stdio.h>
int main() {
    int n, i;
    float sum = 1, num = 3, den = 4;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i++) {
        sum = sum + (num / den);
        num = num + 2;
        den = den + 2;
    }
    printf("Approximate sum: %.1f", sum);
    return 0;
}
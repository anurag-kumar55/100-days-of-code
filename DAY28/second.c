// Read and print elements of a one-dimensional array.
#include <stdio.h>
int main() {
    int a[100], n, i;
    printf("Enter how many numbers: ");
    scanf("%d", &n);

    printf("Enter the numbers:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("You entered:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
// Insert an element in a sorted array at the appropriate position.
#include <stdio.h>
int main() {
    int arr[50], n, x, i;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &x);   

    i = n - 1;

    while(i >= 0 && arr[i] > x) {
        arr[i + 1] = arr[i];  
        i--;
    }

    arr[i + 1] = x; 
    n++;

    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
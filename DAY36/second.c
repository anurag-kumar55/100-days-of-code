// Find the sum of all elements in a matrix.
#include <stdio.h>
int main(){
    int n,m,sum=0;
    printf("Ente size of array:\n");
    scanf("%d %d",&n,&m);
    int arr[n][m];

    printf("Enter the  elements:");

    for(int i =0;i<n;i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&arr[i][j]);
            sum+=arr[i][j];
        }
    }
    printf("Sum: %d",sum);
    return 0;
}
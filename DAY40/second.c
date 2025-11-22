// Multiply two matrices.
#include <stdio.h>
void inputarray(int nn,int mm, int arr[nn][mm])
{
    for(int i =0;i<nn;i++)
    {
        for (int j = 0; j < mm; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    } 
}

int main() {
    int n, m,mm,p;
    printf("Enter size of 1st array\n");
    scanf("%d %d", &n, &m);
    printf("Enter size of 2nd array\n");
    scanf("%d %d", &mm, &p);

    if(mm!=m){
        printf("Col of 1st array should be same as row of 1st");
        return 1;
    }
    int a[n][m], b[m][p], c[n][p];

    printf("Enter 1st array\n");
    inputarray(n,m,a);
    printf("Enter 2nd array\n");
    inputarray(m,p,b);
  
    for (int i = 0; i < n; i++)
        for (int j = 0; j < p; j++) {
            c[i][j] = 0;
            for (int k = 0; k < m; k++)
                c[i][j] += a[i][k] * b[k][j];
        }

    printf("After mupltiplication:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }
    return 0;
}
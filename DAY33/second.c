// Insert an element in a sorted array at the appropriate position.

#include <stdio.h>
int main(){
    int n ;
      printf("Enter size of array:\n");
    scanf("%d",&n);
    int arr[n+1];
    printf("Enter elements:\n");
    for(int i =0;i<n;i++)
        scanf("%d",&arr[i]);
    
    printf("Enter element to Insert:\n");
    int target;
    scanf("%d",&target);

    if(arr[n-1]<target)
    {
        arr[n]=target;
            for(int i=0;i<=n;i++)
            printf("%d ",arr[i]);
            
            return 0;
    }

    int i=0,j=n-2;
    while(i<=j)
    {
        int mid = i+(j-i)/2;
        if(arr[mid]<target)
        i=mid+1;
        if(arr[mid]>target)
        j=mid-1;
    }

    for (int k=n-1; k >=i; k--)
    {
        arr[k+1]=arr[k];
    }
    arr[i]=target;


    for(int i=0;i<=n;i++)
        printf("%d ",arr[i]);
    return 0;
}
#include<stdio.h>
int main()
{
    int a,b,d;
    printf("Enter Two Numbers:");
    scanf("%d %d" ,&a,&b);
    d=a;
    a=b;
    b=d;
    printf("After Swapping Variable:a=%d,b=%d\n",a,b);
    return 0;

}
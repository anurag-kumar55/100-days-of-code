#include<stdio.h>
int main ()
{
    int a,b;
    printf("Enter Two Number:");
    scanf("%d %d",&a,&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("After Swap we get: a=%d,b=%d\n",a,b);
    return 0;
}
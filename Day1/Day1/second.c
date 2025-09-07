#include<stdio.h>
int main()
{
  int a,b,c,d,e;
  float f;
  printf("enter the first number:",a);
  scanf("%d",&a);
  printf("enter second number:",b);
  scanf("%d",&b);
  c=a+b;
  d=a-b;
  e=a*b;
  f=a/b;
  printf("the sum is %d\n",c);
  printf("the difference is %d\n",d);
  printf("the product is %d\n",e);
  printf("the sum is %.2f\n",f);
  return 0;

}
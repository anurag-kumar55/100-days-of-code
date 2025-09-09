// Write a program to input two numbers and display their sum, difference, product, and quotient.


#include<stdio.h>
int main()
{
  int a,b,c,d,e;
  float f;
  printf("Enter the first number:",a);
  scanf("%d",&a);
  printf("Enter second number:",b);
  scanf("%d",&b);
  c=a+b;
  d=a-b;
  e=a*b;
  f=(float) a/b;
  printf("The sum is %d\n",c);
  printf("The difference is %d\n",d);
  printf("The product is %d\n",e);
  printf("The quotient is %.2f\n",f);
  return 0;

}
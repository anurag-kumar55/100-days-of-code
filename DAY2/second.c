#include<stdio.h>
int main(){
    int PI=3.14159;
    float Radius,Area,Circumference;
    printf("Enter the radius:");
    scanf("%f",&Radius);
    Area=PI*Radius*Radius;
    Circumference=2*PI*Radius;
    printf("The area of circle %.2f\n",Area);
    printf("The circumference of circle %.2f\n,",Circumference);
    return 0;


}
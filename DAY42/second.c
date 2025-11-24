/*
 Convert a lowercase string to uppercase without using built-in functions.
*/#include <stdio.h>
#include <ctype.h>
int main(){
    char c[1000];
    printf("Enter String\n");
    fgets(c, sizeof(c), stdin); 
    for(int i=0;c[i]!='\0';i++){
        if(c[i]>='a' && c[i]<='z')
        c[i]=c[i]-32;
    }
    printf("Uppercase String:\n%s",c);
    return 0;
}
// Print each character of a string on a new line.

#include <stdio.h>

int main(){
    char str[1000];
    int count = 0;
    printf("Enter String\n");
    fgets(str, sizeof(str), stdin);

    while (str[count]!='\0')
    {
        printf("%c\n",str[count++]);
    }
    return 0;
}
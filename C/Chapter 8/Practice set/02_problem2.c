#include<stdio.h>

int main(){
    char str[8];
    // scanf("%s",&str[0]);
    // printf("%s",str);
    for (int i = 0; i < 7; i++)
    {
        scanf("%c",&str[i]);
        fflush(stdin);
    }
    str[8]='\0';
     printf("%c",str);
    return 0;
}
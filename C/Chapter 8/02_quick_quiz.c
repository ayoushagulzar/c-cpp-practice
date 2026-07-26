#include<stdio.h>

int main(){
    char str[]="Ayousha";  // same as char str[]={'a','b','c','\0'};
    for (int i = 0; i < 7; i++)
    {
        printf("%c",str[i]);
    }
    
    return 0;
}
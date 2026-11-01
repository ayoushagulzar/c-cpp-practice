#include<stdio.h>
#include<string.h>

int main(){
    char source[]="Laghari";
    char target[10];

    strcpy(target, source);
    printf("%s %s\n", source, target);
    
    return 0;
}
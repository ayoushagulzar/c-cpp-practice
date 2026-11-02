// Practice 8.5: Copy a string
// Question: Copy one string into another using strcpy().

#include<stdio.h>
#include<string.h>

int main(){
    char source[]="Laghari";
    char target[10];

    strcpy(target, source);
    printf("%s %s\n", source, target);
    
    return 0;
}

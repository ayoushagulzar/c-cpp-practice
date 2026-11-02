// Topic: Strings are char arrays
// A string in C is a char array that ends with the null character '\0'.

#include<stdio.h>

int main(){
    char str[]={'a','b','c','\0'};
    printf("The last character is %c\n",str[2]);
    
    return 0;
}

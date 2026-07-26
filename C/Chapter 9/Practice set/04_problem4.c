#include<stdio.h>

typedef struct c
{
    int real;
    int imaginary; 
} Complex;

int main(){
    Complex c={8,5};
    printf("The value of complex number is %d + %di\n",c.real, c.imaginary);
    
    return 0;
} 
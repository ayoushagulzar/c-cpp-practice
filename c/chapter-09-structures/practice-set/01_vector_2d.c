// Practice 9.1: 2D vector
// Question: Store a 2D vector (xi + yj) in a structure and print it.

#include<stdio.h>

struct vector
{
    int i;
    int j; 
};

int main(){
    struct vector v={8,5};
    printf("The value of vector is %di + %dj\n",v.i, v.j);
    
    return 0;
} 

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
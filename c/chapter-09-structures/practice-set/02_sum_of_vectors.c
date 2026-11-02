// Practice 9.2: Sum of two vectors
// Question: Write a function that returns the sum of two vectors.

#include<stdio.h>

typedef struct vector
{
    int i;
    int j; 
} V;

struct vector sumVector(struct vector v1,struct vector v2)
{
   struct vector v3={(v1.i+v2.i), (v1.j+v2.j)};
   return v3;
}


int main(){
    struct vector v1={8,5};
    struct vector v2={1,7};
    struct vector v3=sumVector(v1,v2);
    printf("The sum of the vectors is %di + %dj\n",v3.i, v3.j);
    
    return 0;
} 

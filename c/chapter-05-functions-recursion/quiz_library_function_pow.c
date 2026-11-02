// Topic: Quick quiz: library function pow()
// Uses pow() from math.h to compute the area of a square.
// Note: On Linux, link the math library: gcc file.c -lm

#include <stdio.h>
#include <math.h>
int main()
{
    int a = 5;
    printf("the area of the sqaure is %.2f\n", pow(a, 2));
    return 0;
}

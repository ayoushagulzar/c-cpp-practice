// Topic: Quick quiz: malloc() for floats
// Allocates space for 5 floats and fills them.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 5;
    float *ptr;
    ptr = (float *)malloc(n * sizeof(float));

    ptr[0] = 3.253;
    ptr[1] = 6.253;
    ptr[2] = 9.253;
    ptr[3] = 12.253;
    ptr[4] = 15.253;

    printf("%.2f\n", ptr[0]);
    printf("%.2f\n", ptr[1]);
    printf("%.2f\n", ptr[2]);
    printf("%.2f\n", ptr[3]);
    printf("%.2f\n", ptr[4]);
    free(ptr);

    return 0;
}

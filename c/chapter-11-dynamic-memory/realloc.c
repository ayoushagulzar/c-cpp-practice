// Topic: realloc()
// Grows (or shrinks) a block of memory you already allocated.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=5;
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));
    ptr[0] = 3;
    ptr[1] = 6;

    printf("%d\n", ptr[0]);

    ptr = (int *)realloc(ptr, 10 * sizeof(int)); // now room for 10 ints
    ptr[9] = 99;
    printf("%d %d\n", ptr[0], ptr[9]); // old values are kept
    free(ptr);

    return 0;
}

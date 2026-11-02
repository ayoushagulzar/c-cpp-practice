// Practice 11.1: malloc() six integers
// Question: Allocate memory for 6 integers with malloc() and fill them.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 6;
    int *array;
    array = (int *)malloc(n * sizeof(int));

    array[0] = 23;
    array[1] = 25;
    array[2] = 49;
    array[3] = 28;
    array[4] = 15;
    array[5] = 32;

    printf("%d\n", array[3]);
    free(array);
    

    return 0;
}

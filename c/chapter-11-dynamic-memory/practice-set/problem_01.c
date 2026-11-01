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
    

    return 0;
}
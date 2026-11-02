// Practice 11.5: Table of 7 with realloc()
// Question: Store the table of 7 in a calloc'd array, then grow it to hold 15 values.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 10;
    int *ptr;
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
       ptr[i]=7*(i+1);
    }
    printf("The array is \n");

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ptr[i]);
    }

    n = 15;
    ptr = (int *)realloc(ptr, n * sizeof(int)); // n is now 15
    for (int i = 0; i < n; i++)
    {
       ptr[i]=7*(i+1);
    }
    printf("The array is \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ptr[i]);
    }
    free(ptr);

    return 0;
}

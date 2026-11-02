// Practice 11.2: Fill a malloc'd array from input
// Question: Allocate 6 integers and read their values from the user.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=6;
    int *array;
    array = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", array[i]);
    }
    free(array);

    return 0;
}

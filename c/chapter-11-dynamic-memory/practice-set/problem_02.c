#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=6;
    int *array;
    array = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d\n", &array[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", array[i]);
    }

    return 0;
}
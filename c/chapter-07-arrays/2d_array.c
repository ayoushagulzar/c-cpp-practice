// Topic: 2D arrays
// Reads values into a 3x2 array and prints it as a grid.

#include <stdio.h>
int main()
{
    int array[3][2];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the value of array[%d][%d]\n", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf(" %d ", array[i][j]);
        }
         printf("\n");
    }

    return 0;
}

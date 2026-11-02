// Practice 7.8: Addresses in a 3D array
// Question: Create a 3D array and print the addresses of its elements in
//           increasing order.

#include <stdio.h>

int main()
{
    int arr[2][3][4];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                printf("%p\n", (void *)&arr[i][j][k]);
            }
        }
    }

    return 0;
}

// Practice 7.7: Three tables from user input
// Question: Same as 7.6, but the three numbers come from the user.

#include <stdio.h>

int main()
{
    int n1, n2, n3;
    int arr[3][10];
    printf("Enter three numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    int mult[] = {n1, n2, n3};
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = mult[i] * (j + 1);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("arr[%d][%d] = %d\n", i, j, arr[i][j]);
        }
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    printf("The original value of pointer is %d\n", *ptr);
    ptr = ptr + 4; // adding a number to ptr
    printf("After adding 4,The value of pointer is %d\n", *ptr);
    ptr = ptr - 2; // subtracting a number from ptr
    printf("After subtracting 2,The value of pointer is %d\n", *ptr);

    return 0;
}
// Topic: Pointer arithmetic
// Shows that ptr++ moves the address forward by sizeof(int) bytes, not by 1.

#include <stdio.h>
int main()
{
    int a = 9;
    int *ptr = &a;
    printf("The address of a is   %p\n", (void *)&a);
    printf("ptr holds             %p\n", (void *)ptr);
    ptr++; // moves forward by sizeof(int) bytes, not 1
    printf("After ptr++, ptr is   %p\n", (void *)ptr);
    return 0;
}

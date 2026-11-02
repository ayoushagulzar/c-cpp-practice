// Topic: Pointer basics
// Stores the address of an int in a pointer and reads the value back through it.

#include <stdio.h>
int main()
{
    int i = 72;
    int *j = &i; // j is a pointer pointing to i
    printf("The address of i is %p\n", (void *)&i);
    printf("The address of i is %p\n", (void *)j);

    printf("The value at address j is %d\n", *j);

    return 0;
}

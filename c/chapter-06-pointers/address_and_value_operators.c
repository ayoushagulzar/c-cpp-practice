// Topic: Address-of (&) and value-at (*) operators
// Prints the same address and value in different ways, and shows that *(&i) == i.

#include <stdio.h>
int main()
{
    int i = 8;
    int *j;
    j = &i;
    printf("Add i=%p\n", (void *)&i); // give us the address of i
    printf("Add i=%p\n", (void *)j);  // give us the address of i
    printf("Add j=%p\n", (void *)&j); // give us the address of j
    printf("value i=%d\n", i);        // give us the value of i
    printf("value i=%d\n", *(&i));    // give us the value of i
    printf("value i=%d\n", *j);       // give us the value of i
    return 0;
}

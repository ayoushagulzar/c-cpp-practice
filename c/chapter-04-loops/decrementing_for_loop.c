// Topic: Decrementing for loop
// Counts down from 15 to 1. The condition is just i, which stops when i
// becomes 0.

#include<stdio.h>
int main()
{
int i;
for ( i = 15; i; i--)
{
    printf("%d\n",i);
}

    return 0;
}

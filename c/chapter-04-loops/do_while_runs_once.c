// Topic: do-while loop
// Shows that a do-while loop body runs at least once, even when the condition
// is false from the start.

#include<stdio.h>
int main()
{
    int i=5;
do
{
    printf("The value of i is %d\n",i);
    i++;
} while (i<3);

    return 0;
}

// Topic: Quick quiz: print 1 to n with do-while
// Reads n and prints the numbers from 1 to n using a do-while loop.

#include<stdio.h>
int main()
{
int i=1, n;
scanf("%d",&n);
do
{
    printf("%d\n",i);
    i++;
} while (i<=n);

    return 0;
}

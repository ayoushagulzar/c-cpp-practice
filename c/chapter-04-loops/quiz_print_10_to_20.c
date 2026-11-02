// Topic: Quick quiz: print 10 to 20
// Uses a while loop and an if to print only the numbers from 10 to 20.

#include<stdio.h>
int main()
{
int i=0;
while (i<=20)
{
    if (i>=10)
    {
        printf("The value of i is %d\n",i);
    }
    i++;
}

    return 0;
}

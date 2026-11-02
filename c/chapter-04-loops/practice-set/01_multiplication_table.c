// Practice 4.1: Multiplication table
// Question: Print the multiplication table of a number n.

#include<stdio.h>
int main()
{
int n=4;
int i;
for (i =1; i <=10; i++)
{
    printf("%d X %d=%d\n",n,i,n*i);
}


    return 0;
}

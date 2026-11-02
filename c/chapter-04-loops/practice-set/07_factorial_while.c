// Practice 4.7: Factorial (while)
// Question: Calculate the factorial of a number using a while loop.

#include<stdio.h>
int main()
{
    int i=1, n=8;
    int product=1;
    while (i<=n)
    {
        product*=i;
        i++;  
    }
    
    printf("the factorial of 8 is %d",product);
    return 0;
}

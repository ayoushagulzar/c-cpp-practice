// Topic: Recursion: factorial
// Computes n! with a function that calls itself.
// Note: Without the base case the function would call itself forever (stack overflow).

#include <stdio.h>
int factorial(int);
int factorial(int n)
{
    if (n == 1 || n == 0) // Base Condition
    {
        return 1;
    }
    return factorial(n - 1) * n;
}
int main()
{
    int a = 5;
    printf("The factorial of %d is %d\n", a, factorial(a));
    return 0;
}

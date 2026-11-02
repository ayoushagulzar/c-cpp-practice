// Topic: Ternary operator
// Uses condition ? a : b to choose between two printf calls.

#include<stdio.h>
int main()
{
    //condition ? expression_if_true : expression_if_false;
int a=234, b=23;
a>b? printf("a is greater than b\n") : printf("a is not greater than b\n");
    return 0;
}

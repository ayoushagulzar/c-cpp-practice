// Practice 3.1: Assignment inside if (output question)
// Question: Predict the output. The condition uses = (assignment) instead of == (comparison).

#include <stdio.h>
int main()
{
    int a = 10;
    if (a = 11)
    {
        printf("I am 11");
    }
    else
    {
        printf("I am not 11");
    }
    return 0;
}

// Note: Intentional: a = 11 assigns 11 and evaluates to 11 (true), so it always
// prints "I am 11".

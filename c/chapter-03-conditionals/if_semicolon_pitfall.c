// Topic: if statement (and the stray-semicolon pitfall)
// Shows what happens when you put a semicolon right after if (...): the if
// gets an empty body and the block below always runs.

#include <stdio.h>
int main()
{
    int weight = 40; /* try 40: the message still prints! */
    if (weight > 48)
        ;
    {
        printf("Your weight is greater than 48");
    }

    return 0;
}

// Note: Intentional bug for learning. The ';' after if (weight > 48) ends the
// if statement, so the message prints no matter what.
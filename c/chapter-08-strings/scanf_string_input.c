// Topic: Reading a string with scanf()
// Reads a word with scanf("%s"). It stops at the first space.
// Note: Use a width like %29s so the input cannot overflow the array.

#include <stdio.h>

int main()
{
    char st[30];
    scanf("%29s", st); // reads one word, at most 29 chars
    
    printf("%s", st);

    return 0;
}

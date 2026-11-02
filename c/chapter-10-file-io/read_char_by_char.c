// Topic: Read a file character by character
// Reads sample.txt one character at a time until EOF.
// Note: Store fgetc()'s result in an int, not a char, so EOF (-1) is detected correctly.

#include <stdio.h>

int main()
{
    int ch; // int, not char: EOF is -1 and must not be confused with a real character
    FILE *ptr;
    ptr = fopen("sample.txt", "r");
    if (ptr == NULL)
    {
        printf("sample.txt not found\n");
        return 1;
    }
    while (1)
    {
        ch = fgetc(ptr);
        if (ch == EOF) // check BEFORE printing, otherwise EOF gets printed as junk
        {
            break;
        }
        printf("%c", ch);
    }
    fclose(ptr);

    return 0;
}

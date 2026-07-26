#include <stdio.h>

int main()
{
    char ch;
    FILE *ptr;
    ptr = fopen("harry.txt", "r");
    while (1)
    {
        ch = fgetc(ptr);
        printf("%c", ch);

        if (ch == EOF) // when all the content of a file hase been read, break
        {
            break;
        }
    }

    return 0;
}
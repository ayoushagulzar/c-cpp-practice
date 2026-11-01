#include <stdio.h>

int main()
{
    FILE *ptr1;
    FILE *ptr2;
    char ch;
    ptr1 = fopen("harry2.txt", "r");
    ptr2 = fopen("harry3.txt", "a");
    while (1)
    {
        ch = fgetc(ptr1);
        if (ch == EOF)
        {
            break;
        }
        else
        {

            fprintf(ptr2, "%c", ch);
            fprintf(ptr2, "%c", ch);
            printf("%c", ch);
        }
    }

    return 0;
}
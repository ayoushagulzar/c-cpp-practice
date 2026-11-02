// Practice 10.3: Double every character
// Question: Read text from a file and write it to another file with every
//           character repeated twice.
// Note: Reads input.txt and appends to doubled.txt

#include <stdio.h>

int main()
{
    FILE *ptr1;
    FILE *ptr2;
    int ch;
    ptr1 = fopen("input.txt", "r");
    ptr2 = fopen("doubled.txt", "a");
    if (ptr1 == NULL || ptr2 == NULL) { printf("Could not open files\n"); return 1; }
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
    fclose(ptr1);
    fclose(ptr2);

    return 0;
}

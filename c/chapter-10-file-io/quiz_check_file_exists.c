// Topic: Quick quiz: does the file exist?
// fopen() returns NULL when a file cannot be opened. Always check for it.
// Note: missing.txt intentionally does not exist.

#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("missing.txt", "r");
    if (ptr == NULL)
    {
        printf("The file does not exist\n");
    }
    else
    {
        int num;
        fscanf(ptr, "%d", &num);
        printf("The value of num is %d\n", num);
        fclose(ptr);
    }

    return 0;
}

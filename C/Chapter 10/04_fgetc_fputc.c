#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("harry.txt", "w");
    // char c = fgetc(ptr); // used to read a character from a file
    // printf("%c\n", c);

    fputc('c',ptr);  // used to write the character 'c' to the file
    return 0;
}
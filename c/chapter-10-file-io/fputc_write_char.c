// Topic: fgetc() and fputc()
// Writes a single character to output.txt with fputc(). fgetc() reads one
// character.

// Note: Mode "w" erases the file's old contents.

#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("output.txt", "w");
    // char c = fgetc(ptr); // used to read a character from a file
    // printf("%c\n", c);

    fputc('c',ptr);  // used to write the character 'c' to the file
    fclose(ptr);
    return 0;
}

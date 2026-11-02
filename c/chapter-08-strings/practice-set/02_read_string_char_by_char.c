// Practice 8.2: Read a string character by character
// Question: Read a string from the user one character at a time with %c, then
//           print it with %s.

#include <stdio.h>

int main()
{
    char str[30];
    int i = 0;
    char c;

    printf("Enter a word: ");
    // read one character at a time until Enter is pressed
    while (i < 29 && scanf("%c", &c) == 1 && c != '\n')
    {
        str[i] = c;
        i++;
    }
    str[i] = '\0'; // a char array is only a string once it ends with '\0'

    printf("You entered: %s\n", str);
    return 0;
}

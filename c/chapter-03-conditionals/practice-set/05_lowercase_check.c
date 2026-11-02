// Practice 3.5: Is the character lowercase?
// Question: Check whether a character entered by the user is lowercase, using
//           its ASCII value (97-122).

// Note: ASCII table:
//       https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the character\n");
    scanf("%c", &ch);
    printf("The value of character is %d\n", ch);
    if (ch >= 97 && ch <= 122)
    {
        printf("The character entered by user is lowercase");
    }
    else
    {
        printf("The character entered by user is not lowercase");
    }

    return 0;
}

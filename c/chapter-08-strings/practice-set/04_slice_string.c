// Practice 8.4: slice()
// Question: Write slice(str, m, n) that changes the string so it holds only
//           the characters from index m to n.

#include <stdio.h>

// Keeps only the characters from index m to n (inclusive) in str.
void slice(char str[], int m, int n)
{
    int i = 0;
    for (int j = m; j <= n && str[j] != '\0'; j++)
    {
        str[i] = str[j]; // move each kept character to the front
        i++;
    }
    str[i] = '\0'; // end the new, shorter string
}

int main()
{
    char str[] = "Ayousha";
    slice(str, 1, 4);
    printf("%s\n", str); // prints "yous"

    return 0;
}

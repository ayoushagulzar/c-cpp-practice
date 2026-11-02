// Practice 8.8: Count a character
// Question: Count how many times a given character occurs in a string.

#include <stdio.h>
#include <string.h>

int main()
{
    char c = 'o';
    int count = 0;
    char str[] = "J!epo(u!lopx!bozuijoh";
    for (size_t i = 0; i < strlen(str); i++)
    {
        if (str[i] == c)
        {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}

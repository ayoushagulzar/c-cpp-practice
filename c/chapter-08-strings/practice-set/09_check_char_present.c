// Practice 8.9: Does the string contain a character?
// Question: Check whether a given character is present in a string.

#include <stdio.h>
#include <string.h>

int main()
{
    char c = 'b';
    int contains = 0;
    char str[] = "Ayousha";
    for (size_t i = 0; i < strlen(str); i++)
    {
        if (str[i] == c)
        {
            contains =1;
        }
    }
    if (contains)
    {
        printf("Yes it contains \n");
    }
    else
    {
        printf("Doesn't contains \n");
        
    }
    
    

    printf("%d\n", contains);
    return 0;
}

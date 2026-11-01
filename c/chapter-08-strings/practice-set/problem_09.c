#include <stdio.h>
#include <string.h>

int main()
{
    char c = 'b';
    int contains = 0;
    char str[] = "Ayousha";
    for (int i = 0; i < strlen(str); i++)
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
#include <stdio.h>
#include <string.h>

int main()
{
    char c = 'o';
    int count = 0;
    char str[] = "J!epo(u!lopx!bozuijoh";
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == c)
        {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
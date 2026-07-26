#include <stdio.h>
#include <string.h>

int main()
{
    char st[] = "Harry";
    char a1[] = "Issac";
    char a2[] = "Newton";

    printf("%d\n", strlen(st));

    char target[30];
    strcpy(target, st);
    printf("%s %s\n", st, target);

    strcat(a1, a2); // a1 contains "IssacNewton" <no space in between>
    printf(" %s \n", a1);

    int a = strcmp("far", "ajoke");
    /*Negative value if str1 < str2
  Zero if str1 == str2
Positive value if str1 > str2 (according to their ascii values)*/
    printf("%d\n", a);

    return 0;
}
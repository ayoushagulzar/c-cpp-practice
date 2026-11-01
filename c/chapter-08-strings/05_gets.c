#include <stdio.h>

int main()
{
    char st[30]="Hello World";
    gets(st); //The entered string is stored in st

    printf("%s", st);
    return 0;
}
/*
NOTE!
gets() should not be used because it does not check the size of the buffer, 
leading to potential buffer overflows and security vulnerabilities. 
Instead, use fgets(), which allows you to specify the buffer size and prevent these issues.*/
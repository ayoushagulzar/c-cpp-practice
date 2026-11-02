// Topic: Reading a full line: gets() vs fgets()
// Reads a whole line, spaces included. gets() was used in the lecture; this
// file uses fgets().
// Note: gets() was removed from the C standard (C11) because it cannot limit
//       the input size. Always use fgets().

#include <stdio.h>

int main()
{
    char st[30]="Hello World";
    // gets(st);  <- from the lecture; removed from C11, see note below
    fgets(st, sizeof(st), stdin); // reads a whole line (keeps the '\n')

    printf("%s", st);
    return 0;
}
/*
NOTE!
gets() should not be used because it does not check the size of the buffer, 
leading to potential buffer overflows and security vulnerabilities. 
Instead, use fgets(), which allows you to specify the buffer size and prevent these issues.*/

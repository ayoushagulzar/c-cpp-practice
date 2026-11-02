// Topic: puts()
// puts() prints a string and moves to the next line automatically.

#include <stdio.h>
#include <string.h>

int main()
{
    char st[30];
    fgets(st, sizeof(st), stdin); // gets() is unsafe, see gets_vs_fgets.c
    st[strcspn(st, "\n")] = '\0';  // remove the newline fgets keeps
    puts(st);  //print the string and place the cursor on the next line
    printf("hey");
    return 0;
}

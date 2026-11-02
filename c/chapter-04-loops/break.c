// Topic: break statement
// Exits the loop completely when i reaches 4.

#include<stdio.h>
int main()
{
int n=16;
for ( int i = 1; i <= n; i++)
{
    if (i==4)
    {
        break;
        // stop th loop
    }
    
    printf("%d\n",i);
}

    return 0;
}

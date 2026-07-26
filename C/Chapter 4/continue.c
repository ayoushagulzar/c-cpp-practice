#include<stdio.h>
int main()
{
int n=16;
for ( int i = 1; i <= n; i++)
{
    if (i==4)
    {
        continue;
        // skip th iteration
    }
    
    printf("%d\n",i);
}

    return 0;
}
#include <stdio.h>
int change(int a);

int change(int a)
{
   a = 77; // changes only the local copy, not the caller's variable
   return 0;
}
int main()
{
   int b = 22;
   change(b); // The value of b remains 22
   printf("The value of b is %d", b);

   return 0;
}
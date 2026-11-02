// Topic: Infinite loop
// The condition (3 < 10) never becomes false, so the loop never ends.
// Note: Runs forever on purpose. Press Ctrl+C to stop it.

#include <stdio.h>
int main()
{
   int a = 1;
   while (3 < 10)
   {
      printf("The value of a  is %d\n", a);
      a++;
   }
   return 0;
}

// Topic: Array initialization
// Initializes an array with a list of values; the size is worked out by the
// compiler.

#include <stdio.h>
int main()
{
   int cgpa[]={3,8,19,23};
for (int i = 0; i < 4; i++)
{
   printf("The value of array at location %d is %d\n",i,cgpa[i]);
}
    return 0;
} 

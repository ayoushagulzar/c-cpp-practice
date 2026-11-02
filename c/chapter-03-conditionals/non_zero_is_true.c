// Topic: Any non-zero value is true
// Shows that if() runs for any non-zero value (numbers or characters) and
// skips only for 0.

#include<stdio.h>
int main()
{
// If statament will execute if the number is non_zero otherwise it will not execute
// Here are few examples
if (2345)
{
   printf("This integer can execute\n");
}
if ('B')
{
   printf("This character can execute\n");
}
if (0)
{
    printf("I'm zero I will not execute");
}



    return 0;
}

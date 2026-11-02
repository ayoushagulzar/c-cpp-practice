// Practice 4.9: Prime check (while)
// Question: Check whether a number is prime using a while loop.

#include<stdio.h>
int main()
{
int n=2;
int not_prime=0;
int i=2;
while (i<n)
{
   if (n%i==0 && n!=2)
   {
   not_prime=1;
   }
   i++;
}
if (not_prime)
{
    printf("%d is not a prime number\n",n);
}
else
{
    printf("%d is a prime number\n",n);
}
    return 0;
}

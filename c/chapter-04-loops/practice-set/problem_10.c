#include<stdio.h>
int main()
{
int n=63;
int not_prime=0;
int i=2;
do
{
  if (n%i==0 && n!=2)
  {
   not_prime=1;
   break;
  }
    i++;
} while (i<n);

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
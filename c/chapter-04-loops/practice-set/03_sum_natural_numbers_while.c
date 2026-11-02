// Practice 4.3: Sum of first 10 natural numbers (while)
// Question: Sum the first 10 natural numbers using a while loop.

#include<stdio.h>
int main()
{
    int i=1;
    int sum=0;
while (i<=10)
{
    sum+=i;
    i++;
}
printf("The sum of first ten natural numbers is %d",sum);

    return 0;
}

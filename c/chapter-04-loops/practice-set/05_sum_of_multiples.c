// Practice 4.5: Sum of the table of 8
// Question: Calculate the sum of the numbers in the multiplication table of 8
//           (8 + 16 + ... + 80).

#include<stdio.h>
int main()
{
int n=8;
int sum=0;
for (int i =1; i<=10; i++)
{
    sum+=n*i;
}
printf("The sum of the table of 8 is %d\n",sum);
    return 0;
}

#include<stdio.h>
int main()
{
int n=8;
int sum=0;
for (int i =1; i<=10; i++)
{
    sum+=n*i;
}
printf("The sum of multiples of 8 is%d",sum);
    return 0;
}
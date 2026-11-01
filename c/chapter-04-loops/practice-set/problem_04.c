#include<stdio.h>
int main()
{
    int i;
    int sum=0;
// do
// {
//     sum+=i;
//     i++;
// } while (i<=10);
for ( i = 1; i <=10; i++)
{ sum+=i;}
printf("The sum of fisrt ten natural numbers is %d",sum);
    return 0;
}
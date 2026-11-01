#include<stdio.h>
int main()
{
    int i;
    int product=1;
    for ( i = 1; i <=8 ; i++)
    {
       product*=i; 
    }
    printf("the factorial of 8 is %d",product);
    return 0;
}
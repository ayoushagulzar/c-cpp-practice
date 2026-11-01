#include<stdio.h>
int main()
{
int a=5,b=9,c=2,d=12;
if (a>b && a>c && a>d)
{
    printf("The greatest values is %d",a);
}
else if (b>a && b>c && b>d)
{
    printf("The greatest values is %d",b);
}
else if (c>a && c>b && c>d)
{
   printf("The greatest values is %d",c);
}
else if (d>a && d>b && d>c)
{
    printf("The greatest values is %d",d);
}
    return 0;
}
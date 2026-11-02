// Practice 3.6: Greatest of four numbers
// Question: Find the greatest of four numbers.
// Note: If two numbers tie for the greatest, none of the branches match.
//       A running max variable avoids this.

#include <stdio.h>
int main()
{
    int a = 5, b = 9, c = 2, d = 12;
    if (a > b && a > c && a > d)
    {
        printf("The greatest value is %d", a);
    }
    else if (b > a && b > c && b > d)
    {
        printf("The greatest value is %d", b);
    }
    else if (c > a && c > b && c > d)
    {
        printf("The greatest value is %d", c);
    }
    else if (d > a && d > b && d > c)
    {
        printf("The greatest value is %d", d);
    }
    return 0;
}

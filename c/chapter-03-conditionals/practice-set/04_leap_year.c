// Practice 3.4: Leap year
// Question: Check whether a year entered by the user is a leap year.
// Note: Leap year rule: divisible by 400, OR divisible by 4 but not by 100.

#include<stdio.h>
int main()
{
int year;
printf("Enter the year: ");
scanf("%d",&year);
if ((year%400==0)||((year%4==0)&&(year%100!=0)))
{
    printf("The year is a leap year");
}
else
{
    printf("The year is not a leap year");
}

    return 0;
}

// Topic: Quick quiz: grade calculator
// Converts a percentage into a letter grade (A to F).

#include<stdio.h>
int main()
{
int percentage;
percentage=68;
if (percentage<=100 && percentage>=90)
{
    printf("You got A grade");
}
else if (percentage<=90 && percentage>=80)
{
   printf("You got B grade");
}
else if (percentage<=80 && percentage>=70)
{
   printf("You got C grade");
}
else if (percentage<=70 && percentage>=60)
{
   printf("You got D grade");
}
else if (percentage<=60 && percentage>=50)
{
   printf("You got E grade");
}
else if (percentage<50)
{
   printf("You got F grade");
}

    return 0;
}

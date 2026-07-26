#include<stdio.h>
int main()
{
int experience_years=2;
if (experience_years>=5)
{
    printf("You are not eligible for the job of manager\n");
}
else if (experience_years>=3)
{
 printf("You are eligible for the job of virtual assistent\n");
}
else
{
    printf("You should get experience first");
}

   return 0;
}
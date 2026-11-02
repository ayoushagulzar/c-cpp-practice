// Topic: else-if ladder
// Picks a job role based on years of experience using an if / else if / else
// chain.

#include<stdio.h>
int main()
{
int experience_years=2;
if (experience_years>=5)
{
    printf("You are eligible for the job of manager\n");
}
else if (experience_years>=3)
{
 printf("You are eligible for the job of virtual assistant\n");
}
else
{
    printf("You should get experience first");
}

   return 0;
}

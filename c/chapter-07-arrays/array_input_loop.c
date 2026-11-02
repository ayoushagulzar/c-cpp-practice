// Topic: Reading an array with a loop
// Reads 5 marks into an array using a loop and prints them.

#include <stdio.h>
int main()
{
    int marks[5];

    printf("Enter marks of 5 students\n");
for (int i = 0; i < 5; i++)
{
   scanf("%d",&marks[i]);
}
for (int i = 0; i < 5; i++)
{
   printf("the value of marks at location %d is %d\n",i,marks[i]);
}


    return 0;
}

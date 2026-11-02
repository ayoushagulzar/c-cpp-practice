// Topic: Arrays in memory
// Prints the address of each element to show that arrays are stored next to
// each other in memory.

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
   printf("The address of marks at location %d is %p\n",i,(void*)&marks[i]);
}


    return 0;
}
